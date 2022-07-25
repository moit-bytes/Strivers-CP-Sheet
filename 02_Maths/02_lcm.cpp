#include <iostream>
#define int long long int
using namespace std;

// Logic goes like this
// We know that lcm(a, b) = smallest multiple of both a and b
// in other words the smallest multiple which is divisible by both
// a and b


// if we take consecutive numbers like 3 and 2. Their lcm will be
// obviously multiplication which means 3*2 = 6 which will cross r.


// Now the logic goes like this.

// 1. Take the smallest between l and r.
// 2. Find the next multiple of that smallest in l and r.
// 3. If that multiple lies in l and r the print that along with l.
// 4. Else print -1.

int32_t main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int32_t t;
	cin >> t;

	while (t--)
	{
		int l, r;
		cin >> l >> r;
		bool flag = false;
		int res = -1;

		if (l * 2 <= r)
		{
			flag = true;
			res = l * 2;
		}


		if (flag)
		{
			cout << l << " " << res << "\n";
		}
		else
		{
			cout << -1 << " " << -1 << "\n";
		}



	}
	return 0;
}