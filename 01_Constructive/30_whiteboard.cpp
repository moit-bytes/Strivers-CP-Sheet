#include<iostream>
#include <vector>
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
		int n;
		cin >> n;
		if (n == 2)
		{
			cout << 2 << "\n";
			cout << 1 << " " << 2 << "\n";
		}
		else
		{
			vector<pair<int, int>> v;
			int a = n;
			int b = n - 2;
			int c = (a + b) / 2;

			v.push_back(make_pair(a, b));

			for (int i = n - 1; i >= 1; i--)
			{
				if (i == n - 2)
				{
					continue;
				}
				v.push_back(make_pair(i, c));
				c = (i + c) / 2;
			}

			cout << c << "\n";

			for (auto i : v)
			{
				cout << i.second << " " << i.first << "\n";
			}
		}

	}
	return 0;
}