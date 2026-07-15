#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
  int k, n;
  cin >> n >> k;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  /*cout << n << " " << k << "\n";
  cout << "ARR:\n"
  for (int n : arr) {
    cout << n << " ";
  }
  cout << "\n";

  */
  // esoteric sorting technology lol. Could be better
  /*for (int i = 0; i < n; i++) {
    for (int j = n - 1; j >= i; j--) {
      if (arr[i] > arr[j]) {
        int temp = arr[j];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }*/
  sort(arr, arr + n);

  if (k == 0 && arr[0] == 1) {
    cout << "-1" << '\n';
    return;
  } else if (k == 0) {
    cout << arr[0] - 1 << '\n';
    return;
  }

  if (k == n) {
    cout << arr[n - 1] << '\n';
    return;
  }
  /*
  cout << "SORTED:\n";
  for (int n : arr) {
    cout << n << " ";
  }
  cout << "\n";
  */

  int take = arr[k - 1];
  if (take == arr[k]) {
    cout << "-1" << '\n';
    return;
  }

  cout << take << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  // int t;

  // cin >> t;
  // for (int i = 1; i <= t; ++i) {
  //  cout << "Test case: " << i << ":\n";
  solve();
  //}
}
