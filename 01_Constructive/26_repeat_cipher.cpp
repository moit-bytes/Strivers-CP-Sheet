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

	int i = 0;
	int k = 1;
	while (i < n)
	{
		cout << s[i];
		i = i + k;
		k = k + 1;
	}
	return 0;
}