#include <iostream>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long int n;

	cin >> n;
	int i = 1;
	int x;
	while (n--)
	{
		cin >> x;
		if (x % 2 == 0)
		{
			cout << x / 2 << "\n";
		}
		else
		{
			x = (x + i) / 2;
			cout << x << "\n";
			i = i * (-1);
		}

	}
	return 0;
}