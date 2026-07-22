#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

int power(int n, int x) {
	int ans = 0;
	while (n > 0 && (n % x) == 0) {
		ans++;
		n = n / x;
	}
	return ans;
}

void solve() {
  int n, ans = 0;
  cin >> n;
  if (n < 5) {
    cout << 0 << endl;
    return;
  }
  if (n < 10) {
    cout << 1 << endl;
    return;
  }
  for (int i = 5; i <= n; i += 5) 
    ans += power(i, 5);
  
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
