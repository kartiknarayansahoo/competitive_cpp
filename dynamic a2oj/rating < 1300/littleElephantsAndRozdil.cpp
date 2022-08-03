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
	vector<pair<int,int>> distNum(n);
	for (int i = 0; i < n; ++i){ //n
		cin>>distNum[i].first;
		distNum[i].second=i+1;
	}
	sort(distNum.begin(),distNum.end()); //nlogn
	if (distNum[0].first!=distNum[1].first)
		cout<<distNum[0].second;
	else
		cout<<"Still Rozdil";

}