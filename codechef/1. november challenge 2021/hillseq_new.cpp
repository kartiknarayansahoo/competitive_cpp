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
	int n;
	cin >> n;
	int *a = new int[n];
	// storing the sequence into an array
	for (int i = 0 ; i < n; i++)
	{
		cin >> a[i];
	}

	// sorting in descending order
	sort(a, a + n);

	// max element is repeated
	if (a[0] == a[1])
	{
		cout << -1;
		return;
	}
	// testing for repeated elements <= 2
	for (int i = 0; i < n - 2; ++i)
	{
		// repeated elments > 2
		if (a[i] == a[i + 1] && a[i + 1] == a[i + 2])
		{
			cout << -1;
			return;
		}
	}
}