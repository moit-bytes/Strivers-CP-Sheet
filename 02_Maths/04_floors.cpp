#include <iostream>
#include <cmath>
using namespace std;


// We need to know the floor where Petya lives.
// if(n<=2) then floor is 1


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
		int n, x;
		cin >> n >> x;

		if (n <= 2)
		{
			cout << 1 << "\n";
		}
		else
		{
			int y = ceil((n - 2) / (x * 1.0));


		}

	}
	return 0;
}