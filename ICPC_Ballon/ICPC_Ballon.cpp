#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {

	int n;
	string myarr;
	cin >> n;
	cin >> myarr;

	int ans = 0;
	map<char, bool> seen;

	for (int i = 0; i < n; ++i) {
		if (seen[myarr[i]]) {
			ans++;
		} else {
			ans += 2;
			seen[myarr[i]] = true;
		}
	}

	cout << ans << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		//cout << "Test case: " << i << ": ";
		solve();
	}
}
