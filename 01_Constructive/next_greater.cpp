#include <iostream>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int arr[5] = {10, 18, 7, 23, 46};

	for (int i = 0; i < 5; i++)
	{
		int elem = arr[i];
		int res = -1;
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[j] > elem)
			{
				res = arr[j];
				break;
			}
		}

		cout << elem << " --> " << res << "\n";
	}

	return 0;
}