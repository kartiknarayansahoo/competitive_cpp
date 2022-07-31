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
	

	int x;
	cin>>x;

	int max = x;
	int min = x;
	int count=0;
	
	for (int i = 0; i < n-1; ++i)
	{
		cin>>x;
		if(x>max){
			max=x;
			count++;
		}
		else if(x<min){
			min = x;
			count++;
		}
	}
	cout<<count;
}