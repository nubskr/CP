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
	bool truu = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int a;
			cin >> a;
			if (a==1)
			{
				if (i==0 || i==n-1)
				{
					truu = 1;
				}
				if (j==0 || j==m-1)
				{
					truu = 1;
				}
			}
		}
	}
	if (truu)
	{
		cout << 2 << endl;
	}
	else
	{
		cout << 4 << endl;
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

