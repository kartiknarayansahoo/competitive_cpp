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
	long long a,b,c;
	cin>>a>>b>>c;
	// cout<<(a*b*c)/(a*a);
	long long sumThreeEdges = sqrt(1ll*(a*b*c)/(a*a)) + sqrt(1ll*(a*b*c)/(b*b)) + sqrt(1ll*(a*b*c)/(c*c));
	cout<<4*sumThreeEdges;

}