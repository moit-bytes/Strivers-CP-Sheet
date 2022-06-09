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

	int res = 0;
	for (int i = 1; i <= n; i++)
	{
		res = res + (i * (n - i));
	}

	res = res + n;

	cout << res;
	return 0;
}