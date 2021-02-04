#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const ll N = 1e5 + 1;

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	int pos = -1;
	for (int i = 0; i < n; i++)
	{
		if (s[i]=='^')
		{
			pos = i;
		}
	}
	// cout << pos << endl;
	ll lsum = 0;
	ll rsum = 0;
	int j = 1;
	for (int i = pos-1; i >= 0; i--)
	{
		if (isdigit(s[i]))
		{
			lsum += (s[i] - '0')*j; 
		}
		j++;
	}
	int k = 1;
	for (int i = pos+1; i < n; i++)
	{
		if (isdigit(s[i]))
		{
			rsum += (s[i] - '0')*k; 
		}
		k++;
	}
	if (lsum==rsum)
	{
		cout << "balance" << endl;
	}
	else if (lsum>rsum)
	{
		cout << "left" << endl;
	}
	else if (rsum>lsum)
	{
		cout << "right" << endl;
	}
	// cout << lsum << " " << rsum;
	// cout << j << " " << k;
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
