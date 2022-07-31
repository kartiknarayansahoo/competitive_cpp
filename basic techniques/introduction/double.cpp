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
 
    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	double x = 0.3*3;
	cout<<x<<'\n';
	// printf("%.20f\n", x);
	
	// comparing floating point numbers
	cout<<"hello";
	float a,b;
	a = 0.3*3+0.1;
	b = 1;
	if (abs(a-b)<1e-9){
		// a and b are equal
		cout<<"a and b are equal \n";
	}

}