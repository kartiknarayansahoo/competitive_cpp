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
	vector<int> num;
	char c;
	while(cin>>c){
		if(c!='+')
			num.push_back(c-'0');
	}
	int n = num.size();
	
	sort(num.begin(),num.end());
	for (int i = 0; i < n; ++i){
		if(i==n-1){
			cout<<num[i];
			continue;
		}
		cout<<num[i]<<'+';
	}

}