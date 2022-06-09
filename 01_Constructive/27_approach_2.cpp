#include <iostream>
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
		//from any point (i, j)
		//we should be able to reach (n, m)
		//minimum changes to be done is as follows:


		//1. make every row last element go down if it is R
		//2. for last row (or n-1 row) every element pointing
		// down (D) should be made to R

		//now if we do this change then automatically
		//we can reach to (n, m) from any (i, j)


		int n, m;
		cin >> n >> m;
		int ch = 0;
		for (int i = 0; i < n; i++)
		{
			string s;
			cin >> s;

			if (s[m - 1] == 'R')
			{
				ch++;
			}

			if (i == n - 1)
			{
				for (auto c : s)
				{
					if (c == 'D')
					{
						ch++;
					}
				}
			}
		}

		cout << ch << "\n";
	}
	return 0;
}