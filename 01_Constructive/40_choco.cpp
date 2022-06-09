#include <iostream>
#include <algorithm>
#include <climits>
#define int long long int
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int sum = 0;
	int curr = LLONG_MAX;
	for (int i = n - 1; i >= 0; i--)
	{
		curr = min(curr - 1, arr[i]);
		if (curr < 0)
		{
			curr = 0;
		}
		sum = sum + curr;
	}

	cout << sum;

	return 0;

}