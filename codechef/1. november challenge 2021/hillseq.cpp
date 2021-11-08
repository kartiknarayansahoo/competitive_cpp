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
	cin >> n;
	int *a = new int[n];
	// storing the sequence into an array
	for (int i = 0 ; i < n; i++)
	{
		cin >> a[i];
	}

	// sorting in descending order
	sort(a, a + n, greater<int>());

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
	// given sequence is good sequence
	// we print the good sequence

	// we do this in two parts
	// we extract the unique subsequence first, which will be the
	// second half of our final sequence, and the remaining repeated
	// ones(if any) will be sorted in ascending order and will be the
	// first half of our sequence

	vector<int> vback;
	vector<int> vfront;
	vback.push_back(a[0]);
	for (int i = 1; i < n; i++)
	{
		if (a[i] != a[i - 1])
			vback.push_back(a[i]);
		else
			vfront.push_back(a[i]);
	}
	// cout << endl << "this is front part";
	for (int i = vfront.size() - 1; i >= 0 ; --i)
	{
		cout << vfront[i] << " ";
	}
	// cout << endl << "this is back part";
	for (int i = 0; i < vback.size(); ++i)
	{
		cout << vback[i] << " ";
	}
	delete[] a;
}