#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int h1, m1;
	int h2, m2;
	char p;

	cin >> h1 >> p >> m1;
	cin >> h2 >> p >> m2;

	int t1 = (h1 * 60) + m1;
	int t2 = (h2 * 60) + m2;

	int hr = (t1 + t2) / 2;

	if (hr / 60 < 10)
	{
		cout << 0;
	}
	cout << hr / 60 << p;
	if (hr % 60 < 10)
	{
		cout << 0;
	}
	cout << hr % 60;

	return 0;

}