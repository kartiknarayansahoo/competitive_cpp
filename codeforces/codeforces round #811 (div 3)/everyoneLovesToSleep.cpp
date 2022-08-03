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
	int n, H, M;
	cin>>n>>H>>M;
	int sleepTime = H*100 + M;

	int timediff[n];
	int alarm;
	for (int i = 0; i < n; ++i)
	{
		cin>>H>>M;
		alarm =H*100 + M;
		timediff[i]=alarm-sleepTime;
		if(timediff[i]<0)
			timediff[i]+=2400;
	}

	int min = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(min>timediff[i])
			min=timediff[i];
	}
	if(min-min/100*100>60)
		cout<<min/100<<" "<<min-min/100*100-40;
	else
		cout<<min/100<<" "<<min-min/100*100;

}