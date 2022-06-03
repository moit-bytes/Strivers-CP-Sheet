#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	long long int k;
	int w;
	cin >> k >> n >> w;
	long long price = 0;

	for (int i = 0; i < w; i++)
	{
		price = price + ((i + 1) * k);
	}

	if (price <= n)
	{
		cout << 0;
	}
	else
	{
		cout << (price - n);
	}
}