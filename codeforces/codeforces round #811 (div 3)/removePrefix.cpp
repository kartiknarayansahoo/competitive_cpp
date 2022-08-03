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
bool sortBySecond(pair<int,int> a, pair<int,int> b){
	return a.second>b.second;
}
void solve()
{
	int n;
	cin>>n;
	int a[n];
	map<int,int> temp;
	for (int i = 0; i < n; ++i){ //n
		cin>>a[i];
		temp[a[i]]++;;
	}
	// cout<<temp.size()<<" ";
	// cout<<temp[2]<<" ";
	deque<pair<int,int>> valFreq(temp.begin(),temp.end()); //n
	// cout<<valFreq.size()<<" ";
	sort(valFreq.begin(), valFreq.end(),sortBySecond); //nlogn

	auto itr = valFreq.begin();
	// cout<<(itr+1)->second<<" ";
	int count=0;
	for (int i = 0; i < n; ++i){
		if(itr->second>1){
			count++; //counting the numbers removed
			for (auto it = valFreq.begin(); it!=valFreq.end(); ++it){ //decrementing the freq
				if(it->first==a[i]){
					it->second--;
					if(it->second==0)
						valFreq.erase(it); //erasing value whouse freq = 0
					break;
				}
			}
			a[i]=0;
		}
		if(itr->second==1||itr->second==0){
			itr++;
		}
	}
	cout<<count;
}