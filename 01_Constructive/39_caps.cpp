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
	bool upper = true;


	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] >= 'A' and s[i] <= 'Z')
		{
			continue;
		}
		else
		{
			upper = false;
			break;
		}
	}

	if (upper)
	{
		if (s[0] >= 'A' and s[0] <= 'Z')
		{
			s[0] = s[0] - 'A' + 'a';
		}
		else
		{
			s[0] = s[0] - 'a' + 'A';
		}


		for (int i = 1; i < s.length(); i++)
		{
			s[i] = s[i] - 'A' + 'a';
		}

		cout << s;
	}
	else
	{
		cout << s;
	}




	return 0;
}