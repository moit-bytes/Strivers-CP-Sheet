#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a, b;
	cin >> a >> b;

	int year = 0;

	while (a <= b)
	{
		year++;
		a = a * 3;
		b = b * 2;
	}

	cout << year;

	return 0;
}