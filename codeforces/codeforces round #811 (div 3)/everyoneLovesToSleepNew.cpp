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

	int timediff[n];
	int aH, aM;
	for (int i = 0; i < n; ++i)
	{
		int fM, fH;
		cin>>aH>>aM;
		if((aH==H and aM>=M)||(aH>H)){
			if(aM<M){
				fM = ((60-M)+aM);
				fH = aH - H - 1;
			}
			else if(aM==M){
				fH = aH - H;
				fM = 0;
			}
			else{
				fM = aM-M;
				fH = aH-H;
			}
		}
		else{
			// cout<<2;
			if(M!=0){
				fM=(aM+(60-M))%60;
				fH=(aM+(60-M))/60 + aH + (24-H-1);
			}
			else{
				fM = aM;
				fH = aH + (24-H);
			}
		}
		if(fH<0)
			fH+=24;
		timediff[i]=fH*100 + fM;
	}

	int min = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		if(min>timediff[i])
			min=timediff[i];
	}

	cout<<min/100<<" "<<min-min/100*100;

}