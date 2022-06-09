#include <iostream>
#include <cmath>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;

	int min = ceil(n / 2.0);
	bool flag = false;

	// for (int i = min; i <= n; i++)
	// {
	// 	if (i % m == 0)
	// 	{
	// 		cout << i;
	// 		flag = true;
	// 		break;
	// 	}
	// }

	int ans = ceil(min / (m * 1.0)) * m;
	if (ans >= min and ans <= n)
	{
		flag = true;
		cout << ans;
	}

	if (!flag)
	{
		cout << -1;
	}

}