#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define io ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

// const ll N = 1e5 + 1;

void solve(){
	string A,B,C,D;
	vector<int> v(4);
	cin >> A >> B >> C >> D;
	int a = v[0] = A.length()-2;
	int b = v[1] = B.length()-2;
	int c = v[2] = C.length()-2;
	int d = v[3] = D.length()-2;
	sort(v.begin(),v.end());
	// cout << "max = " << v[3] << " " << "min = " << v[0];
	int min = v[0];
	int max = v[3];
	int cnt = 0;
	int cnt1 = 0;
	for (int i = 0; i < 4; i++)
	{
		if (max>=2*v[i])
		{
			cnt++;
		}
		if (2*min<=v[i])
		{
			cnt1++;
		}
	}
	if (cnt == 3 && cnt1 == 3)
	{
		cout << "C" << endl;
	}
	else if (cnt == 3 || cnt1 == 3)
	{
		if (cnt == 3)
		{
			min = max;
		}
		if (min==a)
		{
			cout << A[0] << endl;
		}
		else if (min==b)
		{
			cout << B[0] << endl;
		}
		else if (min==c)
		{
			cout << C[0] << endl;
		}
		else
		{
			cout << D[0] << endl;
		}
	}
	else
	{
		cout << "C" << endl;
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

