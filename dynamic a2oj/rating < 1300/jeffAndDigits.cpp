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
	map<int,int> fiveZerofreq;
	fiveZerofreq[0]=0;
	fiveZerofreq[5]=0;
	int x;
	while(cin>>x){
		fiveZerofreq[x]++;
	}

	if(fiveZerofreq[0]==0){
		cout<<-1;
		return;
	}
	int numFive=fiveZerofreq[5]/9*9; //number of 5 to be printed

	if(numFive!=0){
		for (int i = 0; i < numFive; ++i)
			cout<<5;
		for (int i = 0; i < fiveZerofreq[0]; ++i)
			cout<<0;
	}
	else
		cout<<0;
}