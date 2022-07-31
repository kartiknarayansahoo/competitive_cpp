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
	if(n%2!=0){
		cout<<-1;
		return;
	}
	
	int num[n];
	for (int i = 0; i < n; ++i)
		num[i]=i+1;

	int temp;
	for (int i = 0; i < n; i=i+2)
	{
		temp = num[i];
		num[i]=num[i+1];
		num[i+1]=temp;
	}
	for (int i = 0; i < n; ++i)
		cout<<num[i]<<" ";
}