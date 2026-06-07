#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
	string s;
	getString(s);
	int ans = 1, curr = 1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == s[i - 1]) curr++;
		else curr = 1;
		ans = max(ans, curr);
	}
	cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
