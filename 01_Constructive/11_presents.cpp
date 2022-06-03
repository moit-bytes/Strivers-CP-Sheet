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

	int arr[n];
	int x;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[x - 1] = i + 1;
	}

	for (auto i : arr)
	{
		cout << i << " ";
	}

	return 0;
}