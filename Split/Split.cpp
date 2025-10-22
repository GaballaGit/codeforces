#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n), cnt(n+1), ct(n + 1);

	for (ll i = 0; i < n; i++) {
		cin >> a[i];
		cnt[a[i]]++;
	}

	for (ll i = 0; i <= n; i++) {
		if (cnt[i] % k) {
			cout << 0 << "\n";
			return;
		} else {
			cnt[i] /= k;
		}
	}

	ll res = 0;
	for (ll l = 0, r = 0; l <= r and r < n; r++) {
		ct[a[r]]++;
		while (ct[a[r]] > cnt[a[r]]) {
			ct[a[l]]--;
			l++;
		}
		res += (r - l + 1);
	}
	cout << res << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int t;

	cin >> t;
	for (int i = 1; i <= t; ++i) {
		//cout << "Test case: " << i << ":\n";
		solve();
	}
}
