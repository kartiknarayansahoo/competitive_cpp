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
	string s;
	cin>>s;
	string s_num;
	for (int i = 0; i < int(s.length()); ++i)
	{
		if(s[i]=='-' && s[i+1]=='.'){
			s_num.push_back('1');
			i++;
		}
		else if(s[i]=='-' && s[i+1]=='-'){
			s_num.push_back('2');
			i++;
		}
		else
			s_num.push_back('0');

	}
	cout<<s_num;
}