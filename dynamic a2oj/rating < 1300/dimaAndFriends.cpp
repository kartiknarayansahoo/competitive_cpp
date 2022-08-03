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

	int x;
	int totalfingers = 0;
	for (int i = 0; i < n; ++i){
		cin>>x;
		totalfingers+=x;
	}
	int count=0;
	for (int i = 1; i <= 5; ++i){
		if((totalfingers+i)%(n+1)!=1)
			count++;
	}
	cout<<count;

}