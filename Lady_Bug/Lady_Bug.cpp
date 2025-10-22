#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	string one, two;
	cin >> n >> one >> two;

	int temp;
	for (int i = 1; i < n; i++) {
		if (one[i] == '1') {
			temp = one[i];
			one[i] = two[i-1];
			two[i-1] = temp; 

		}
		if (two[i] == '1') {
			temp = two[i];
			two[i] = one[i-1];
			one[i-1] = temp;
		}
	}

	bool cracked = true;
	for (int i = 0; i < n; i++) {
		if (one[i] == '1' ) {
			cracked = false;
		}
	}

	if (cracked) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
	int t;

	cin >> t;
	for (int i = 1; i <= t; i++) {
		//cout << "Test case: " << i << ":\n";
		solve();
	}
}
