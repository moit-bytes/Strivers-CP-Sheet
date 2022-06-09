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
		int n;
		cin >> n;

		string s;
		cin >> s;
		int ans = n;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1')
			{
				ans = max(ans, max(2 * (i + 1), 2 * (n - i)));
			}
		}

		cout << ans << "\n";
	}

	return 0;
}