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
	int c = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '7' or s[i] == '4')
		{
			c++;
		}
	}

	if (c == 7 or c == 4)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}