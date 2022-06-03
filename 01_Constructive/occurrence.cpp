#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v = {1, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6};
	int n = v.size();

	int key;
	cin >> key;

	int low = lower_bound(v.begin(), v.end(), key) - v.begin() + 1;
	int high = upper_bound(v.begin(), v.end(), key) - v.begin() + 1;

	cout << high - low;

}