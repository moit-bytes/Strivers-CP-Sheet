#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	int week[7];
	for (int i = 0; i < 7; i++)
	{
		cin >> week[i];
	}
	int i = 0;
	while (n > 0)
	{
		n = n - week[i];
		if (n <= 0)
		{
			break;
		}
		i = (i + 1) % 7;
	}

	cout << i + 1;
	return 0;
}