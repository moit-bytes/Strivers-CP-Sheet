#include <iostream>
using namespace std;

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
		int n, m;
		cin >> n >> m;

		char arr[n][m];

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
			}
		}
		int i, j;
		int ch = 0;
		for (int l = 0; l < n; l++)
		{
			for (int k = 0; k < m; k++)
			{
				i = l;
				j = k;
				char s = arr[i][j];
				//cout << s << ",";
				while (s != 'C')
				{
					//cout << "Entered";

					if (s == 'D')
					{
						if (i + 1 >= n)
						{
							ch++;
							arr[i][j] = 'R';
							j = j + 1;
						}
						else
						{
							i = i + 1;
						}
					}
					else
					{
						if (j + 1 >= m)
						{
							ch++;
							arr[i][j] = 'D';
							i = i + 1;
						}
						else
						{
							j = j + 1;
						}
					}

					s = arr[i][j];
					//cout << s << ",";
				}
			}
		}



		cout << ch << "\n";


	}
	return 0;
}