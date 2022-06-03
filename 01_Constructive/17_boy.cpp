#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	int arr[26] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		arr[s[i] - 'a']++;
	}

	int cd = 0;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] >= 1)
		{
			cd++;
		}
	}

	if (cd % 2 == 0)
	{
		cout << "CHAT WITH HER!";
	}
	else
	{
		cout << "IGNORE HIM!";
	}
}