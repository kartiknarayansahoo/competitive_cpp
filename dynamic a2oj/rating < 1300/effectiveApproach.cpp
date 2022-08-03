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
	int a[n];
	for (int i = 0; i < n; ++i)
		cin>>a[i];

	int m;
	cin>>m;
	// int b[m];
	// for (int i = 0; i < m; ++i)
	// 	cin>>b[i];

	// approach
	// create a map storing the value as keyid and index as the valueid (nlogn)
	// map is already sorted
	// use binary search to find the value and add the respective indexes m*(logn)
	// overall tc - nlogn

	map<int,int> aNew;
	for (int i = 0; i < n; ++i) // nlogn
		aNew[a[i]] = i;

	int b;
	long long vasya=0, petya=0;
	while(cin>>b){
			auto itr = aNew.find(b); // logn
			vasya+=itr->second+1;
			petya+=n-(itr->second);
	}
	cout<<vasya<<" "<<petya;

}