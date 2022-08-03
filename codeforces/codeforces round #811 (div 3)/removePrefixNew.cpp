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
 
    // cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
	int n;
	cin>>n;
	int a[n];
	map<int,int> valFreq;
	for (int i = 0; i < n; ++i){ //n
		cin>>a[i];
		valFreq[a[i]]++;
	}
	int uniqEle = valFreq.size(); //1
	int totalElements = n;
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if(uniqEle<totalElements){
			count++;
			totalElements--;
			valFreq[a[i]]--;
			if (valFreq[a[i]]==0){
				valFreq.erase(a[i]);
				uniqEle = valFreq.size();
			}
		}
		else
			break;
	}
	cout<<count;

}