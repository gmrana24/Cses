#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  ll t, x, y;
  cin >> t;
  while (t--) {
    cin >> x >> y;
		ll mx = max(x, y);
		if (x == mx) {
			if (x & 1) {
				x--;
				cout << x * x + y;
			} else cout << x * x - (y - 1);
		}
		else {
			if (y & 1) cout << y * y - (x - 1);
			else {
				y--;
				cout << y * y + x;
			}
		}
		cout << endl;
  }
	
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
