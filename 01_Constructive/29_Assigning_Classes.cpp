#include <iostream>
#include <algorithm>
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
		int n;
		cin >> n;

		int arr[2 * n + 1];
		//take 2n elements input

		for (int i = 1; i <= 2 * n; i++)
		{
			cin >> arr[i];
		}

		//sort the array from index 1 to 2n
		sort(arr + 1, arr + (2 * n + 1));

		//now we know median of an even length array is
		//given by element at
		//n/2 and n/2 + 1

		//for ex: 6 5 4 1 2 3
		//sort: 1 2 3 4 5 6
		//now by logic 3 and 4 are median

		//so diff is 1

		//so here half of 2n = n
		//and 2n/2 + 1 = n+1


		cout << abs(arr[n] - arr[n + 1]) << "\n";
	}

}