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
	int year;
	string s;
	cin>>year;	
	while(true){
		year++;
		s = to_string(year);
		if(s[0]==s[1]||s[0]==s[2]||s[0]==s[3])
			continue;
		else if(s[1]==s[2]||s[1]==s[3])
			continue;
		else if(s[2]==s[3])
			continue;
		break;
	}
	cout<<year;

}