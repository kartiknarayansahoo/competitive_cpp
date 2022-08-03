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
	
	int x;
	int i=1;
	int index=1;
	while(cin>>x){
		if(max<=x && x>m){
			max=x;
			index=i;
		}
		i++;
	}
	if(max==INT_MIN)
		cout<<n;
	else
		cout<<index;
}