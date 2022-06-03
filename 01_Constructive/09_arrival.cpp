#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio
	int n;
	cin >> n;

	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}


	int max = INT_MIN;
	int min = INT_MAX;
	int id1 = 0, id2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			id1 = i;
		}
		if (arr[i] <= min)
		{
			min = arr[i];
			id2 = i;
		}
	}

	if (arr[0] == max and arr[n - 1] == min)
	{
		cout << 0;
	}
	else if (id1 == 0 and id2 == n - 1)
	{
		cout << 0;
	}
	else if (id1 == 0)
	{
		cout << abs(n - 1 - id2);
	}
	else if (id2 == n - 1)
	{
		cout << id1;
	}
	else if (id1 > id2)
	{
		int val1 = id1 + (n - 1 - id2 - 1);
		cout << val1;
	}
	else
	{
		int val1 = id1 + (n - 1 - id2);
		cout << val1;
	}
	return 0;
}