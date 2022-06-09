#include<iostream>
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
		int n;
		cin >> n;

		//For any n the ans is 2
		cout << 2 << "\n";

		if (n == 2)
		{
			cout << 1 << " " << 2 << "\n";
		}
		else
		{
			cout << (n - 2) << " " << n << "\n";
			cout << (n - 1) << " " << (n - 1) << "\n";

			for (int i = n - 3; i >= 1; i--)
			{
				cout << i << " " << i + 2 << "\n";
			}
		}

	}
	return 0;
}