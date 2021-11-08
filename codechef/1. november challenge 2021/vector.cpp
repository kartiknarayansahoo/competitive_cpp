#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
		cout << "\n";
	}

	cout << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
	int a[4] = {1, 2, 3, 4};
	vector<int> v;
	cout << v.size();
	for (int i = 0; i < 4; ++i)
	{
		v.push_back(a[i]);
	}
	cout << v.size();

}