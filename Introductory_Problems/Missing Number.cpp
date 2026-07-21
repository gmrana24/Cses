#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  ll n, s, x;
  cin >> n;
  s = (n * (n + 1)) / 2;
	for (int i = 1; i < n; i++) {
		cin >> x;
		s -= x;
	}
	cout << s << endl;

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
