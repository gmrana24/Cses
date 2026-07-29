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
  int n, l;
  cin >> n;
  l = 1 << n;
  rep(i, 0, l) {
    int gray = i ^ (i >> 1);
    string code = "";
    for (int j = n - 1; j >= 0; j--)
      code += (gray & (1 << j)) ? '1' : '0';
    cout << code << endl;
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
