#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// const ll N = 1e5 + 1;

void solve(){
	int y,k,n;
	cin >> y >> k >> n;
	int cnt = 0;
	for (int i = k; i <= n; i+=k)
	{
		if (y<i)
		{
			cout << i-y << " ";
			cnt++;
		}
	}
	if (cnt==0)
	{
		cout << -1 << endl;
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

