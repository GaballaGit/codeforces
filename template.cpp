#include <iostream>
using namespace std;

#define ll long long
#define arr array

int main() {
	sync_with_stdio(0);
	int t;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cout << "Test case: ", i << ":\n";
		solve();
	}
}
