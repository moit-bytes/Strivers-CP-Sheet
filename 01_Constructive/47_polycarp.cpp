#include <iostream>
#include <cmath>
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

	int r1, r2;

	int diff = h2 - h1;
	diff = diff + (m1 + m2) / 60;
	int hr = diff / 2;
	int min = ((diff % 2) * 60 + (m1 + m2) % 60) / 2;
	hr = hr + (min / 60);
	min = min % 60;

	if (min == 0)
	{
		r1 = (h1 + hr) % 24;
		r2 = 0;
	}
	else
	{
		r1 = (h1 + hr) % 24;
		r2 = min;
	}

	if (r1 == 0)
	{
		cout << "0" << r1;
	}
	else
	{
		int d1 = floor(log10(r1)) + 1;
		if (d1 == 1)
		{
			cout << "0" << r1;
		}
		else
		{
			cout << r1;
		}
	}


	cout << p;

	if (r2 == 0)
	{
		cout << "0" << r2;
	}
	else
	{
		int d2 = floor(log10(r2)) + 1;
		if (d2 == 1)
		{
			cout << "0" << r2;
		}
		else
		{
			cout << r2;
		}
	}





	return 0;
}