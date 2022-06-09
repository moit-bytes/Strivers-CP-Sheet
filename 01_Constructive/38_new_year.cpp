#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, t;
	cin >> n >> t;

	int arr[n];

	for (int i = 0; i < n - 1; i++)
	{
		cin >> arr[i];
	}

	int pos = 1;
	int next;


	//1 2 3 4 5 6 7 8 pos
	//7 6 5 4 3 2 1 0 max (n-i) = (8 - pos)
	//1 2 1 2 1 2 1   (1<= a[i] <= n-i)
	//
	//2 4 4 6 6 8 8 (next values = pos + a[i])
	while (pos < t)
	{
		next = pos + arr[pos - 1];
		pos = next;
	}

	if (pos == t) cout << "YES";
	else cout << "NO";


}