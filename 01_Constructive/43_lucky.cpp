#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long int n;
	cin >> n;

	long int rem;

	int x = 0, y = 0;
	int x1 = 0, y1 = 0;
	int d1 = 0; int d2 = 0;

	if (n == 4)
	{
		cout << 4;
	}
	else if (n == 7)
	{
		cout << 7;
	}
	else
	{
		bool flag = false;
		if (n % 4 == 0)
		{
			d1 = n / 4;
		}
		if (n % 7 == 0)
		{
			d2 = n / 7;
		}
		while (4 * x < n)
		{
			x++;
			rem = n - 4 * x;
			y = rem / 7;

			rem = 4 * x + 7 * y;

			if (rem == n)
			{
				flag = true;
				break;
			}
		}



		if (flag)
		{
			if (d1 > 0 and d1 < x + y)
			{
				x = d1;
				y = 0;
			}
			else if (d2 > 0 and d2 < x + y)
			{
				x = 0;
				y = d2;
			}
			for (int i = 0; i < x; i++)
			{
				cout << 4;
			}
			for (int i = 0; i < y; i++)
			{
				cout << 7;
			}
		}
		else
		{
			cout << -1;
		}
	}

}