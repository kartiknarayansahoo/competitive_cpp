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
	int n;
	cin>>n;

	vector<int> a(n),b(n);

	int x;
	for (int i = 0; i < n; ++i){
		cin>>x; a[i]=x;
		cin>>x; b[i]=x;
	}

	int max=INT_MIN;
	int sum=0;

	for (int i = 0; i < n; ++i){
		sum+= -a[i]+b[i];
		if(sum>max)
			max=sum;
	}

	cout<<max;


}