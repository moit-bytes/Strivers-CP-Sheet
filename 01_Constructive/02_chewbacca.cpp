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

	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		int num = s[i] - '0';
		if (9 - num < num)
		{
			if (9 - num == 0 and i == 0)
			{
				continue;
			}
			s[i] = char((9 - num) + '0');
		}
	}

	cout << s;

	return 0;
}