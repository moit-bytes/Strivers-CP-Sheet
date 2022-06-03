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
		string s;
		cin >> s;

		int val = (s[0] - '0') - 1;
		val = val * 10;

		int k = 1;
		for (int i = 0; i < s.length(); i++)
		{
			val = val + k;
			k = k + 1;
		}

		cout << val << "\n";

	}



	return 0;
}