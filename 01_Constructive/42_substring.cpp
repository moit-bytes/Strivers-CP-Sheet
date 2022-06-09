#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 1; i < n; i++)
	{
		if (s[i - 1] != s[i])
		{
			cout << "YES\n" << s[i - 1] << s[i];
			return 0;
		}
	}

	cout << "NO";
	return 0;

}