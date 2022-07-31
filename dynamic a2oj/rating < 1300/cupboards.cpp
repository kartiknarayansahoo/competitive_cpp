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
	vector<int> left(n);
	vector<int> right(n);
	int x;
	for (int i = 0; i < n; ++i){
		cin>>x; 
		left[i] = x; // 1 open; 0 closed
		cin>>x; 
		right[i] = x;
	}

	int left_zero=0, left_one=0;
	int right_zero=0, right_one=0;

	for (int i = 0; i < n; ++i)
	{
		if(left[i]==0)
			left_zero++;
		else
			left_one++;
		if(right[i]==0)
			right_zero++;
		else
			right_one++;
	}

	int sum=0;
	if(left_zero>left_one)
		sum+=left_one;
	else
		sum+=left_zero;

	if(right_zero>right_one)
		sum+=right_one;
	else
		sum+=right_zero;

	cout<<sum;
}