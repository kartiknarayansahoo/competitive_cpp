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
	long long num;
	cin>>num;
	string str;
	str = to_string(num);
	
	int count=0;
	for (int i = 0; i < (int)str.length(); ++i)
	{
		if(str[i]=='4' || str[i]=='7')
			count++;
	}
	if(count==4 || count==7)
		cout<<"YES";
	else	
		cout<<"NO";
}