#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

ll prod(deque<ll> nums) {
	ll ans = 1;
	for (ll i : nums) {
		ans *= i;
	}
	return ans;
}

void solve() {
	int n, m;
	cin >> n >> m;

	ll cur;
	string ch;
	deque<ll> nums;

	for (int i = 0; i < n; i++) {
		cin >> cur;
		nums.push_back(cur);
	}

	cin >> ch;


	ll produ = prod(nums);
	cout << produ % m;

	for (char c: ch) {
		switch (c) {
			case 'L':
				produ = produ/nums.front();
				nums.pop_front();
				if (!nums.empty()) cout << " " << produ % m;
				break;
			case 'R':
				produ = produ/nums.back();
				nums.pop_back();
				if (!nums.empty()) cout << " " << produ % m;
				break;
		}
	}

	cout << "\n";

}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		//cout << "Test case: " << i << ":\n";
		solve();
	}
}
