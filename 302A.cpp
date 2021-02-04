#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// const ll N = 1e5 + 1;

void solve(){
	int n,m;
	cin >> n >> m;
	int zeroes = 0;
	int ones = 0;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a==-1)
		{
			zeroes++;
		}
		else
		{
			ones++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		int l,r;
		cin >> l >> r;
		if (l==r)
		{
			cout << 0 << endl;
		}
		else
		{
			int temp = abs(l-r) + 1;
			if (temp/2<=(zeroes) && temp/2<=(ones) && temp%2==0)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
	}
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

