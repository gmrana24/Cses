#include <bits/stdc++.h>
#include <functional>

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
  string s[8];
  vector<bool> r(8), d1(16), d2(16);
  rep(i, 0, 8) { cin >> s[i]; }
  auto dfs = [&](int i, int queen, auto &&self) {
    if (queen == 0)
      return 1;
    if (i == 8)
      return 0;
    int ans = 0;
    rep(j, 0, 8) {
      if (s[i][j] == '*' || r[j] || d1[i + j] || d2[i + 8 - j])
        continue;
      r[j] = true;
      d1[i + j] = true;
      d2[i + 8 - j] = true;
      ans += self(i + 1, queen - 1, self);
      r[j] = false;
      d1[i + j] = false;
      d2[i + 8 - j] = false;
    }
    return ans;
  };
  cout << dfs(0, 8, dfs) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
