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
    //cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	char c;
	set<char> username;
	while(cin>>c){
		username.insert(c);
	}
	int size = username.size();
	if(size%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
}