#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	vector<int> ans;

	while (k > 0)
	{
		int pos = min_element(arr, arr + n) - arr;
		if (k >= arr[pos])
		{
			ans.push_back(pos + 1);
		}
		else
		{
			break;
		}

		k = k - arr[pos];
		arr[pos] = INT_MAX;
	}

	cout << ans.size() << "\n";

	for (auto i : ans)
	{
		cout << i << " ";
	}


	return 0;
}