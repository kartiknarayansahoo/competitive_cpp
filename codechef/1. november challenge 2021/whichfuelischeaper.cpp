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

	// cout << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
void solve()
{
	int x, y, a, b, k;
	cin >> x >> y >> a >> b >> k;

	x += k * a;
	y += k * b;
	if (x < y)
		cout << "PETROL";
	else if (x > y)
		cout << "DIESEL";
	else
		cout << "SAME PRICE";

}