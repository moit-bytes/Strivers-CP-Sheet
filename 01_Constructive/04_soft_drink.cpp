#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int val1 = floor((k * l) / (nl * 1.0));
	int val2 = c * d;
	int val3 = floor(p / (np * 1.0));

	int res = floor(min(val1, min(val2, val3)) / (n * 1.0));

	cout << res;


	return 0;
}