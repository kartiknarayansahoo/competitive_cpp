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
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;

	int totalDrinkToasts = k*l/nl;
	int limeSlicesToasts = c*d;
	int saltToasts = p/np;

	// cout<<totalDrinkToasts<<" "<<limeSlicesToasts<<" "<<saltToasts<<endl;
	int min = totalDrinkToasts;
	if (min>limeSlicesToasts)
		min = limeSlicesToasts;
	if (min>saltToasts)
		min = saltToasts;

	cout<<min/n;

}