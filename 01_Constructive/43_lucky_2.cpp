#include <iostream>
using namespace std;

//Approach 2


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long int n;
	cin >> n;

	int x = 0, y = 0;

	while (n > 0)
	{
		if (n % 7 == 0)
		{
			y = n / 7;
			n = 0;
			break;
		}

		x++;
		n = n - 4;
	}

	if (n == 0)
	{
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