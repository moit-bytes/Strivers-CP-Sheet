#include <iostream>
#include <climits>
using namespace std;

int solve(long arr[], int n)
{
	long cur_max = arr[0];
	long ov_max = arr[0];

	for (int i = 1; i < n; i++)
	{
		cur_max = cur_max + arr[i];
		if (cur_max < arr[i])
		{
			cur_max = arr[i];
		}

		if (cur_max > ov_max)
		{
			ov_max = cur_max;
		}
	}

	return ov_max;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m;

	cin >> n >> m;

	int a[n];
	int b[m];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}


	long arr[min(m, n)];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		int c_sum = INT_MIN;
		int val = INT_MIN;
		int ind = 0;
		for (int j = 0; j < m; j++)
		{

			if (b[j] != INT_MIN)
			{
				c_sum = b[j] * a[i];
				if (c_sum > val)
				{
					val = c_sum;
					ind = j;
				}
			}
		}

		if (val != INT_MIN)
		{
			while (ind > 0)
			{
				b[ind--] = INT_MIN;
			}

			arr[k++] = val;
		}
	}

	// for (auto i : arr)
	// {
	// 	cout << i << " ";
	// }

	long res = solve(arr, k);


	cout << res;

	return 0;


}