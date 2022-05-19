#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[3];
	cin >> arr[0] >> arr[1] >> arr[2];

	sort(arr, arr + 3);

	int dist = abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);

	cout << dist;

	return 0;

}