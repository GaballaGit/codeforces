#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {

	int n, m, x, y;
	int count = 0;
	cin >> n >> m >> x >> y;

	int laserLoc;

	for (int i = 0; i < n; i++ ){
		cin >> count;
	}

	for (int i = 0; i < m; i++ ){
		cin >> count;
	}


	cout << m+n << "\n";
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
