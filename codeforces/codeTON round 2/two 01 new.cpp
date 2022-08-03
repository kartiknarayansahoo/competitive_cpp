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
	 
	string temp;
	cin>>temp;
	deque<char> a(temp.begin(), temp.end());
	cin>>temp;
	deque<char> b(temp.begin(), temp.end());

	int tries=n-m;
	if(b[0]=='0'){ //take min
		for (int i = 0; i < tries; ++i)	{
			if(a[i]=='0'){
				if(a[i+1]=='1')
					a[i+1]='0';

			}
		}
	}
	else if(b[0]=='1'){ // take max
		for (int i = 0; i < tries; ++i){
			if(a[i]=='1'){
				if(a[i+1]=='0')
					a[i+1]='1';
			}
		}
	}
	for (int i = 0; i < tries; ++i)
		a.pop_front();
	// for (int i = 0; i < (int)a.size(); ++i){
	// 	cout<<a[i];
	// }

	for (int i = 0; i < m; ++i)
	{
		if(a[i]!=b[i]){
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}

