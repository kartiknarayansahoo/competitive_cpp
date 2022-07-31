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
	int n,t;
	cin>>n>>t;	
	string s;
	cin>>s;
	while(t--){
		// cout<<"Hello"<<endl;
		for (int i = 0; i < n-1; ++i)
		{
			if(s[i]=='B' && s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	cout<<s;
}