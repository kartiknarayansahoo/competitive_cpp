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

	// logic
	// find leftmost max and rightmost min
	// case 1 : max is left of min (and hence min is right of max)
		// ans = dist_max_left + dis_min_right  
	// case 2 : max is right of min ()
		// ans = dist_max_left + dis_min_right - 1

	int sold[n];
	for (int i = 0; i < n; ++i)
		cin>>sold[i];

	int max = INT_MIN;
	int min = INT_MAX;
	int min_index,max_index;

	for (int i = 0; i < n; ++i)
	{
		if(max<sold[i]){ //leftmost max so no equal to
			max = sold[i];
			max_index = i;
		}
		if(min>=sold[i]){ //rightmost min so equal to 
			min = sold[i];
			min_index=i;
		}
	}

	if (min_index>max_index)
		cout<<max_index+(n-1-min_index);
	else
		cout<<max_index+(n-1-min_index)-1;

}