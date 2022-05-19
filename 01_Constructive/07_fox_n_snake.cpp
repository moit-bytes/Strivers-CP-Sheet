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


	int c = m - 1;
	char ch;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			ch = '#';
		}
		else
		{
			ch = '.';
		}
		for (int j = 0; j < m; j++)
		{
			if (j == c)
			{
				cout << "#";
			}
			else
			{
				cout << ch;
			}
		}
		cout << "\n";
		if (c == m - 1 and ch == '.')
		{
			c = 0;
		}
		else if (c == 0 and ch == '.')
		{
			c = m - 1;
		}
	}
	return 0;
}