#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int k;
	cin >> k;

	string s;
	cin >> s;

	int arr[26] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		arr[s[i] - 'a']++;
	}
	bool flag = true;
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == 0)
		{
			continue;
		}
		else
		{
			if (arr[i] % k != 0)
			{
				flag = false;
				break;
			}
		}
	}

	if (!flag)
	{
		cout << -1 << "\n";
	}
	else
	{
		string res = "";
		for (int i = 0; i < 26; i++)
		{
			if (arr[i] != 0)
			{
				for (int j = 1; j <= arr[i] / k; j++)
				{
					res = res + char('a' + i);
				}
			}
		}
		string ans = "";
		for (int i = 1; i <= k; i++)
		{
			ans = ans + res;
		}

		cout << ans;
	}


	return 0;
}