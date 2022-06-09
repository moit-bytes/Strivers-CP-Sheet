#include <iostream>
#include <algorithm>
using namespace std;


bool compare(int arr1[], int arr2[])
{
	for (int i = 0; i < 26; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}

	return true;
}
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
		string s1;
		cin >> s1;
		int n1 = s1.length();

		string s2;
		cin >> s2;
		int n2 = s2.length();

		int arr1[26] = {0};
		int arr2[26] = {0};

		for (auto i : s1)
		{
			arr1[i - 'a']++;
		}

		bool flag = false;

		for (int i = 0; i < n2; i++)
		{
			for (int i = 0; i < 26; i++)
			{
				arr2[i] = 0;
			}

			for (int j = i; j < n2; j++)
			{
				arr2[s2[j] - 'a']++;

				if (compare(arr1, arr2))
				{
					flag = true;
					break;
				}
			}

			if (flag)
			{
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