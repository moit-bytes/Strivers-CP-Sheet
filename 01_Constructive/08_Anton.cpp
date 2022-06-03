#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{

	unordered_map<string, int> m1;

	m1.insert(pair<string, int>("Tetrahedron", 4));
	m1.insert(pair<string, int>("Cube", 6));
	m1.insert(pair<string, int>("Octahedron", 8));
	m1.insert(pair<string, int>("Dodecahedron", 12));
	m1.insert(pair<string, int>("Icosahedron", 20));

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int sum = 0;

	while (n--)
	{
		string s;
		cin >> s;

		sum = sum + m1[s];
	}

	cout << sum;

	return 0;
}