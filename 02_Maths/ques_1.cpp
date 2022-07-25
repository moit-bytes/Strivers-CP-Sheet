#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		ll val = 2 * n;

		ll arr[val];

		for (ll i = 0; i < val; i++)
		{
			cin >> arr[i];
		}
		bool flag = true;
		for (ll i = 0; i < val; i = i + 2)
		{
			ll sum = arr[i] + arr[i + 1];

			if (sum % 2 == 0)
			{
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}

		if (flag)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}

	}

	return 0;
}