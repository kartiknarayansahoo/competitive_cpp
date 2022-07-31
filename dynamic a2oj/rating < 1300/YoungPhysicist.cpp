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
	int x,y,z;
	int x_sum=0, y_sum=0, z_sum=0;
	while(n--){
		cin>>x>>y>>z;
		x_sum+=x;
		y_sum+=y;
		z_sum+=z;
	}
	if(x_sum==0 && y_sum==0 &&z_sum==0)
		cout<<"YES";
	else
		cout<<"NO";

}