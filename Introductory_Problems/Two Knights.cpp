#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n;
  cin >> n;
  for (ll i = 1; i <= n; i++)
    cout << (i * i * (i * i - 1)) / 2 - 4 * (i - 1) * (i - 2) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
