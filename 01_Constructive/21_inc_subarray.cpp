#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	long long int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int dp[n] = {0};
	dp[0] = 1;
	int mx = 1;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] - arr[i - 1] > 0)
		{
			dp[i] = dp[i - 1] + 1;
			if (dp[i] > mx)
			{
				mx = dp[i];
			}
		}
		else
		{
			dp[i] = 1;
		}
	}

	cout << mx;
	return 0;
}