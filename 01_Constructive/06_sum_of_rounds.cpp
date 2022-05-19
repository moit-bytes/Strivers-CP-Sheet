#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio
	int t;
	cin >> t;

	while (t--)
	{
		string s;
		cin >> s;

		if (s.length() == 1)
		{
			cout << 1 << "\n" << s << "\n";
		}
		else
		{
			int c = 0;
			int c1 = 0;
			string st = "";
			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] == '0')
				{
					c++;
					continue;
				}
				else
				{
					c1++;
					st = st + s[i];
					for (int j = i + 1; j < s.length(); j++)
					{
						st = st + "0";
					}

					st = st + " ";
				}
			}

			if (c == s.length())
			{
				cout << 1 << "\n";
				cout << s << "\n";
			}
			else
			{
				cout << c1 << "\n";
				cout << st << "\n";
			}
		}
	}
	return 0;
}