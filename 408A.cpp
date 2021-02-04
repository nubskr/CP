#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// const ll N = 1e5 + 1;

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	vector<int> time;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < v[i]; j++)
		{
			int a;
			cin >> a;
			sum += a*5;
		}
		sum += v[i]*15;
		time.pb(sum);
	}
	int min = 1000;
	for (auto i : time)
	{
		if (i<min)
		{
			min = i;;
		}
	}
	cout << min << endl;
}

int main()
{
	io;
	int t = 1;
	// cin >> t;
	while (t--)
	{
		solve();
	}
    return 0;
} 

