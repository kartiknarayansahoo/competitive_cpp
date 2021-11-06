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
	int n;
	// taking number of characters in alphabet
	cin >> n;
	int odd = 0;
	int even = 0;
	int a;
	// taking array inputs
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a % 2 == 0)
			even++;
		else
			odd++;
	}
	// cout << even << " " << odd << endl;
	// cout << "starts here" << endl;
	if (odd <= 1)
		cout << 0;
	else
	{
		cout << odd / 2;
	}
}
