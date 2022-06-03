#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;

	int k;
	cin >> k;
	int m = s.length() - 1;

	for (int i = 0; i < k; i++)
	{
		if (s[m] > '0')
		{
			s[m] = s[m] - 1;
		}
		else
		{
			m--;
		}
	}

	for (int i = 0; i <= m; i++)
	{
		cout << s[i];
	}
	return 0;
}