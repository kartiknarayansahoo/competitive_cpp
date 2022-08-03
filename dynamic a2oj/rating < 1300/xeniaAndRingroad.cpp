#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
 
    // int t = 1;
    // /*is Single Test case?*/ cin >> t;
    // while (t--) {
    //     solve();
    //     cout << "\n";
    // }
 	solve();
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	long long n,m;
	cin>>n>>m;
	long long a[m];
	for (int i = 0; i < m; ++i)
		cin>>a[i];

	long long time=a[0]-1;
	for (int i = 1; i < m; ++i)
	{
		if(a[i]<a[i-1])
			time+=n-a[i-1]+a[i];
		else
			time+=a[i]-a[i-1];
	}
	cout<<time;
}