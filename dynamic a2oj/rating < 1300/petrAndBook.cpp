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
	int n;
	cin>>n;
	int days[7];
	for (int i = 0; i < 7; ++i)
		cin>>days[i];

	int i=0;
	int ans=0;
	while(n>0){
		n-=days[i];
		ans=i;
		if(i==6)
			i=0;
		else
			i++;
	}
	cout<<ans+1;
}