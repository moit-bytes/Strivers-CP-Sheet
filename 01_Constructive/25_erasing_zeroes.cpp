#include <iostream>
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
		string s;
		cin >> s;
		int pf = 0;
		int p1 = 0;
		int res = 0;
		int i;
		for (i = 0; i < s.length(); i++)
		{
			pf = 0;
			if (s[i] == '1')
			{
				p1 = i;

				for (int j = i + 1; j < s.length(); j++)
				{
					if (s[j] == '0')
					{
						continue;
					}
					else
					{
						pf = j - 1;
						i = j - 1;
						break;
					}
				}

				if (pf != 0)
					res = res + (pf - p1);
			}
		}

		cout << res << "\n";
	}
	return 0;
}