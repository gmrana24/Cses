#include <algorithm>
#include <bits/stdc++.h>
#include <set>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)
#define pb push_back
#define all(arr) arr.begin(), arr.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair
#define F first
#define S second

using namespace std;

void solve() {
  int n, m, x;
  cin >> n >> m;
  multiset<int> ticket;
  vector<int> price(m);
  for (int i = 0; i < n; i++) {
    cin >> x;
    ticket.insert(x);
  }
  for (auto &i : price)
    cin >> i;
  for (int i : price) {
    auto f = ticket.lower_bound(i);
    if (*f == i) {
      cout << *f;
      ticket.erase(f);
    } else if (f != ticket.begin()) {
      f--;
      cout << *f;
      ticket.erase(f);
    } else
      cout << -1;
    cout << endl;
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
