#include <iostream>
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

	if (n & 1)
	{
		cout << "Ehab";
	}
	else
	{
		cout << "Mahmoud";
	}

	return 0;
}