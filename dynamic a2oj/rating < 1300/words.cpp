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
	string str;
	cin>>str;

	int big=0,small=0;
	for (int i = 0; i < (int)str.length(); ++i)
	{
		if((int)str[i]>=65 && (int)str[i]<=90)
			big++;
		else
			small++;
	}
	if(big>small)
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	else
		transform(str.begin(), str.end(), str.begin(), ::tolower);

	cout<<str;
}