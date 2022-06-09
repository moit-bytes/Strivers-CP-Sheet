#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	cin >> m >> n;

	int b[m][n];
	int a[m][n];
	int nb[m][n];



	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> b[i][j];
			a[i][j] = -1;
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i][j] == 0)
			{
				for (int k = 0; k < n; k++)
				{
					a[i][k] = 0;
				}

				for (int k = 0; k < m; k++)
				{
					a[k][j] = 0;
				}
			}
			else if (a[i][j] == -1)
			{
				a[i][j] = b[i][j];
			}
		}
	}


	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			nb[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				if (a[i][k] == 1)
				{
					nb[i][j] = 1;
					break;
				}
			}

			for (int k = 0; k < m; k++)
			{
				if (a[k][j] == 1)
				{
					nb[i][j] = 1;
					break;
				}
			}

		}
	}

	//compare b and nb

	bool flag = true;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (b[i][j] == nb[i][j])
			{
				continue;
			}
			else
			{
				flag = false;
				break;
			}
		}
	}

	if (flag)
	{
		cout << "YES\n";
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
	else
	{
		cout << "NO\n";
	}
	return 0;
}