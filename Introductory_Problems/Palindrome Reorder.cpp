#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  string s;
  getString(s);
  vector<int> arr(26);
  for (auto c : s) {
    arr[c - 'A']++;
  }
  int skip = -1;
  for (int i = 0; i < 26; i++) {
    if (arr[i] & 1) {
      if (skip != -1) {
        cout << "NO SOLUTION" << endl;
        return;
      } else {
        skip = i;
      }
    }
  }
	int n = s.length();
  string ans(n, ' ');
	int l = 0;
  for (int i = 0; i < 26; i++) {
		if (i == skip) continue;
    for (int x = 0; x < arr[i] / 2; x++) {
			ans[l] = 'A' + i;
			l++;
    }
  }
	for (int i = 0; i < arr[skip]; i++) {
		ans[l] = 'A' + skip;
		l++;
	}
	
  for (int i = 25; i > -1; i--) {
		if (i == skip) continue;
    for (int x = 0; x < arr[i] / 2; x++) {
			ans[l] = 'A' + i;
			l++;
    }
  }
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
