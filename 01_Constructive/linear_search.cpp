#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int INF = 1000000005;
long long int INFF = 1000000000000000005ll;
double PI = acos(-1);
int dirx[8] = { -1, 0, 0, 1, -1, -1, 1, 1 };
int diry[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };


#define fastio ios_base::sync_with_stdio(false); cin.tie(0)
#define SQR(x) ((ll)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define SIZE(v) (int)v.size()
#define MOD 1e9+7
#define debug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

#define pb push_back
#define pf push_front


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}


inline string intToString(ll a)
{
	char x[100];
	sprintf(x, "%lld", a);
	string s = x;
	return s;
}

inline ll stringToInt(string a)
{
	char x[100];
	ll res;
	strcpy(x, a.c_str());
	sscanf(x, "%lld", &res);
	return res;
}

inline string getString(void)
{
	char x[1000005];
	scanf("%s", x);
	string s = x;
	return s;
}

inline string uppercase(string s)
{
	int n = SIZE(s);
	for (int i = 0; i < n; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	return s;
}

inline string lowercase(string s)
{
	int n = SIZE(s);
	for (int i = 0; i < n; i++)
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 'A' + 'a';
	return s;
}





template <typename T>
class Graph
{
	vector<T> *l;
	T v;
public:
	Graph(T v)
	{
		this->v = v;
		l = new vector<T>[v];
	}
	void addEdge(T x, T y, bool bidr = true)
	{
		l[x].pb(y);
		if (bidr)
		{
			l[y].pb(x);
		}
	}


};






void solve()
{
	int arr[6] = {100, 70, 12, 25, 43, 37};
	int key;
	cin >> key;
	bool flag = false;
	int res;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == key)
		{
			flag = true;
			res = i;
			break;
		}
	}

	if (flag)
	{
		cout << "Element Found at " << res;
	}
	else
	{
		cout << "Element Not Found";
	}
}



int main()
{

	fastio;

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	solve();

	return 0;
}
