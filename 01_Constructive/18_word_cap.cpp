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

	if (s[0] >= 97 and s[0] <= 122)
	{
		s[0] = s[0] - 'a' + 'A';
	}

	cout << s;
}