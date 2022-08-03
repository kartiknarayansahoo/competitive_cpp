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
	vector<pair<int,int>>heightIndex(n);
	for (int i = 0; i < n; ++i){
		cin>>heightIndex[i].first;
		heightIndex[i].second = i+1;
	}
	int min=INT_MAX;
	int index;
	for (int i = 0; i < n; ++i){
		if(i==n-1){
			if(min>abs(heightIndex[0].first-heightIndex[i].first)){
				index=n-1;
				min = abs(heightIndex[0].first-heightIndex[i].first);
			}
		}
		else if(min>abs(heightIndex[i+1].first-heightIndex[i].first)){
			min=abs(heightIndex[i+1].first-heightIndex[i].first);
			index=i;
		}
	}

	if(index==n-1)
		cout<<heightIndex[index].second<<" "<<heightIndex[0].second;
	else
		cout<<heightIndex[index].second<<" "<<heightIndex[index+1].second;

}