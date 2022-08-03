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
 
    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--) {
        solve();
        cout << "\n";
    }
 
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	int n,m;
	cin>>n>>m;
	string a,b;
	cin>>a>>b;
	// cout<<"hello";
	// number of operations
	int tries = n-m;
	// if number of changes > tries, then ans is no

	string substrA;
	for (int i = n-m; i < n; ++i)
	{
		substrA.push_back(a[i]);
	}
	// cout<<substrA;
	int changes = 0;

	for (int i = 0; i < m; ++i)
		if (substrA[i]!=b[i])
			changes++;

	if (changes>tries)
		cout<<"NO";
	else{
		// if number of ones are less than required
		int oneCountA=0, oneCountB=0;
		for (int i = 0; i < n; ++i){
			if(a[i]=='1')
				oneCountA++;
		}
		for (int i = 0; i < m; ++i){
			if(b[i]=='1')
				oneCountB++;
		}
		if(oneCountA<oneCountB)
			cout<<"NO";
		else
			cout<<"YES";
	}
}