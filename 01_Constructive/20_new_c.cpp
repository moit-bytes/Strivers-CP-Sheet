#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--)
	{
		long long int a, b, n;
		cin >> a >> b >> n;

		if (b < a)
		{
			swap(a, b);
		}

		long long int c = 0;
		while (a <= n and b <= n)
		{
			a += b;
			c++;

			if (b < a)
				swap(a, b);
		}

		cout << c << "\n";
	}
	return 0;
}