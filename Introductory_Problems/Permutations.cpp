#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n < 4) {
    if (n == 1)
      cout << 1;
    else
      cout << "NO SOLUTION";
    cout << endl;
    return;
  }
  for (int i = 2; i <= n; i += 2)
    cout << i << " ";
  for (int i = 1; i <= n; i += 2)
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
