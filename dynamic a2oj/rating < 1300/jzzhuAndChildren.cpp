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
	int n,m;
	cin>>n>>m;
	int max=INT_MIN;

	int a[n];
	for (int i = 0; i < n; ++i){
		cin>>a[i];
		a[i]=ceil((float)a[i]/m);
	}

	int index=1;
	for (int i = 0; i < n; ++i){
		if(max<=a[i]){
			max=a[i];
			index=i+1;
		}
	}

	cout<<index;
}