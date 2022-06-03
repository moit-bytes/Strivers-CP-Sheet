#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	vector<int> v;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '+')
		{
			v.push_back(s[i] - '0');
		}
	}

	sort(v.begin(), v.end());
	string res = "";
	for (auto i : v)
	{
		res = res + char(i + '0') + "+";
	}

	for (int i = 0; i < res.length() - 1; i++)
	{
		cout << res[i];
	}
	return 0;
}