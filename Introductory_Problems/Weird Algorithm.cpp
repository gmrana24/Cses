#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
	ll n;
	cin >> n;
	while (n > 1) {
		cout << n << " ";
		if (n & 1) n = n * 3 + 1;
		else n = n >> 1;
	}
	cout << 1 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
