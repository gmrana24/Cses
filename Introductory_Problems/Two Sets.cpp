#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  ll n, s;
  cin >> n;
  s = n * (n + 1) / 2;
  if (s & 1) {
    cout << "NO" << endl;
    return;
  }
  s /= 2;
  cout << "YES" << endl;
  set<int> unused, used;
  for (int i = n; i >= 1; i--) {
    if (i > s)
      unused.insert(i);
    else {
      used.insert(i);
      s -= i;
    }
  }

  cout << unused.size() << endl;
  for (auto &i : unused) {
    cout << i << " ";
  }
  cout << endl;
  cout << used.size() << endl;
  for (auto &i : used)
    cout << i << " ";
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
