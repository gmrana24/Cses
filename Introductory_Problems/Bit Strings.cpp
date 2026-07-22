#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n;
  cin >> n;
  ll ans = 1, mod = 1e9 + 7;
  while (n--) {
    ans = (ans * 2) % mod;
  }
	cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
