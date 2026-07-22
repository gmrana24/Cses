#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  ll x, y;
  cin >> x >> y;
  if (x > y * 2 || y > x * 2 || (x + y) % 3)
    cout << "NO";
  else
    cout << "YES";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
