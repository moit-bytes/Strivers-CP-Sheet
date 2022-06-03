#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int val;
	cin >> val;
	int sum = 1;
	int level = 1;
	while (sum < val)
	{
		level++;
		sum = sum + (level * (level + 1)) / 2;
	}

	if (sum == val)
	{
		cout << level;
	}
	else
	{
		cout << level - 1;
	}
}