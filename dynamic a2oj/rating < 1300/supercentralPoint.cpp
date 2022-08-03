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
	// approach for each point find the four points in each of the directions
	// if exist, then take yes else no

	int x[n];
	int y[n];

	for (int i = 0; i < n; ++i){
		cin>>x[i];
		cin>>y[i];
	}
	int l,r,u,d;

	int count=0;
	for (int i = 0; i < n; ++i){
		l=0,r=0,u=0,d=0;
		for (int j = 0; j < n; ++j){ // checking along x direction
			if(x[i] == x[j] and i!=j){
				if(y[i]>y[j] and !l) // checking for left
					l=1;
				if(y[i]<y[j] and !r) // checking for right
					r=1;
			}
			if(r==1 and l==1)
				break;
		}
		for (int j = 0; j < n; ++j){ // checking along y direction
			if(y[i] == y[j] and i!=j){
				if(x[i]>x[j] and !d) // checking for down
					d=1;
				if(x[i]<x[j] and !u) // checking for up
					u=1;
			}
			if(d==1 and u==1)
				break;
		}
		if(d==1 and u==1 and l==1 and r==1)
			count++;
	}
	cout<<count;
}