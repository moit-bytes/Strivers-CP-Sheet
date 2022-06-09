#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	if (n == m)
	{
		cout << 0;
	}
	else if (m < n)
	{
		cout << -1;
	}
	else
	{
		if (m % n != 0)
		{
			cout << -1;
		}
		else
		{
			int div = m / n;

			int c = 0;

			while (div % 2 == 0)
			{
				c++;
				div = div / 2;
			}

			while (div % 3 == 0)
			{
				c++;
				div = div / 3;
			}

			if (div > 1)
			{
				cout << -1;
			}
			else
			{
				cout << c;
			}
		}
	}
	return 0;
}