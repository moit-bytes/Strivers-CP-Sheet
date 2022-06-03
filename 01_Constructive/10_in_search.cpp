#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
	fastio
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	int c = 0;
	while (n--)
	{
		int x;
		cin >> x;

		if (x == 1)
		{
			c++;
		}

	}

	if (c >= 1)
	{
		cout << "HARD";
	}
	else
	{
		cout << "EASY";
	}

	return 0;
}