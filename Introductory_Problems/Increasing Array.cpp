#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
	ll n, x, cost = 0, curr;
	cin >> n >> x;
	for (int i = 1; i < n; i++) {
		cin >> curr;
		cost += max(0ll, x - curr);
		x = max(curr, x);
	}
	cout << cost << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
