#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, x, y;
	cin >> n >> x >> y;

	ll arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{

		bool flag = true;
		for (int j = max(0, i - x); j <= min(n - 1, i + y); j++)
		{
			if (arr[i] < arr[j] or i == j)
			{
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			cout << i + 1;
			break;
		}

	}
	return 0;
}