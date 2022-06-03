#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	getline(cin, s);

	int arr[26] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		arr[s[i] - 'a']++;
	}
	bool flag = false;
	char res;
	for (int i = 0; i < s.length(); i++)
	{
		if (arr[s[i] - 'a'] == 1)
		{
			flag = true;
			res = s[i];
			break;
		}
	}

	if (flag)
	{
		cout << res;
	}
	else
	{
		cout << -1;
	}

	return 0;
}