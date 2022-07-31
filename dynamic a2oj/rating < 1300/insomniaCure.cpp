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
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	vector<int> arr(d,0);

	for (int i = k-1; i < d; i=i+k)
		arr[i]+=1;
	for (int i = l-1; i < d; i=i+l)
		arr[i]+=1;
	for (int i = m-1; i < d; i=i+m)
		arr[i]+=1;
	for (int i = n-1; i < d; i=i+n)
		arr[i]+=1;

	int count=0;
	for (int i = 0; i < d; ++i){
		if(arr[i]!=0)
			count++;
	}
	cout<<count;
}
