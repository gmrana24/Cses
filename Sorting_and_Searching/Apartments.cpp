#include <bits/stdc++.h>

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
  int n, m, k, count = 0;
  cin >> n >> m >> k;
  vector<int> app(n), apa(m);
  for (auto &i : app)
    cin >> i;
  for (auto &i : apa)
    cin >> i;
  sort(all(apa));
  sort(all(app));
  int i = 0, j = 0;
  while (i < app.size()) {
    while (j < apa.size() && app[i] > apa[j] + k)
      j++;
    if (j == apa.size())
      break;
    if (app[i] >= apa[j] - k && app[i] <= apa[j] + k) {
      count++;
      j++;
    }
    i++;
  }
  cout << count << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
