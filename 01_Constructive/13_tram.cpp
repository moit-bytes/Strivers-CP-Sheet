#include <iostream>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;

int main()
{
	fastio
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	pair<int, int> p[n];
	int x, y;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		p[i] = make_pair(x, y);
	}

	int cap = p[0].second;
	int mx = cap;

	for (int i = 1; i < n; i++)
	{
		int rem = cap - p[i].first;
		cap = rem + p[i].second;

		if (cap > mx)
		{
			mx = cap;
		}
	}

	cout << mx;
	return 0;
}