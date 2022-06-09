#include <iostream>
#define int long long int
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--)
	{
		int a, b, c;
		cin >> a >> b >> c;

		if (a == b and b == c)
		{
			cout << -1 << " " << a << "\n";
		}
		else if (a == c)
		{
			cout << -1 << " " << b << "\n";
		}
		else if (a < c)
		{
			int res = -1;
			if (c < a * b)
			{
				res = b;
			}
			else
			{
				res = -1;
			}

			cout << 1 << " " << res << "\n";
		}
		else
		{
			cout << -1 << " " << 1 << "\n";
		}
	}
	return 0;
}