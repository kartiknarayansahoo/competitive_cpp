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
bool isPrime(int num){
	for (int i = 2; i <= sqrt(num); ++i)
	{
		if(num%i==0)
			return false;
	}
	return true;
}
void solve()
{
	int n,m;
	cin>>n>>m;
	int nextPrime = n;

	if(!isPrime(m)){
		cout<<"NO";
		return;
	}
	else{ 
		while(++nextPrime){ //finding next prime to n
			if(isPrime(nextPrime))
				break;
		}
		if (nextPrime==m)
			cout<<"YES";
		else
			cout<<"NO";
	}
}