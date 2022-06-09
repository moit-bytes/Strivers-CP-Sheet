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
		int n;
		cin >> n;

		string s;
		cin >> s;
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			char c1 = s[i] + 1;
			char c2 = s[i] - 1;

			char c3 = s[n - i - 1] + 1;
			char c4 = s[n - i - 1] - 1;

			if (c1 == c3 or c1 == c4)
			{
				continue;
			}
			else if (c2 == c3 or c2 == c4)
			{
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;
}