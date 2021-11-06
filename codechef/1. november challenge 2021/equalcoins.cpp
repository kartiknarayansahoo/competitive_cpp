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
	int x, y;
	cin >> x >> y;
	if (x % 2 != 0) // sum is odd
		cout << "no";
	else // sum is even
	{
		if (x % 2 == 0 && y % 2 == 0) // both even
			cout << "yes";
		else //x is even and y is odd
		{
			if (x == 0)
				cout << "no";
			else
				cout << "yes";
		}
	}
}