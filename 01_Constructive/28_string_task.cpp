#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;

	unordered_map<char, bool> mp;
	mp['a'] = true;
	mp['e'] = true;
	mp['i'] = true;
	mp['o'] = true;
	mp['u'] = true;
	mp['y'] = true;

	string res = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (mp[s[i]] or mp[char(s[i] - 'A' + 'a')])
		{
			continue;
		}
		else
		{
			if (s[i] >= 'a' and s[i] <= 'z')
			{
				res = res + "." + s[i];
			}
			else
			{
				res = res + "." + char(s[i] - 'A' + 'a');
			}
		}
	}

	cout << res;
	return 0;
}