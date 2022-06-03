#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string cd;
	cin >> cd;

	string arr[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	bool flag = false;

	for (int i = 0; i < 5; i++)
	{
		if (arr[i][0] == cd[0] or arr[i][1] == cd[1])
		{
			flag = true;
			break;
		}
	}

	if (flag)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}