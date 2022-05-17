#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	fastio
	cin >> n;
	int x = 0;

	while (n--)
	{
		string s;
		cin.ignore();
		getline(cin, s);
		//cout << s;
		if (s.length() == 1)
		{
			continue;
		}
		else
		{
			for (int i = 0; i < s.length(); i++)
			{
				if (s[i] == '+')
				{
					x = x + 1;
					break;
				}
				else if (s[i] == '-')
				{
					x = x - 1;
					break;
				}
			}
		}
	}

	cout << x;

	return 0;
}