#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int x;
	int r, c;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> x;
			if (x == 1)
			{
				r = i + 1;
				c = j + 1;
			}
		}
	}

	r = abs(3 - r);
	c = abs(3 - c);

	cout << r + c;

	return 0;
}