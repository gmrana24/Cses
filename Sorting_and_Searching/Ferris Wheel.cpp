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
	int n, x;
	cin >> n >> x;
	vector<int> arr(n);
	for (auto &i: arr) cin >> i;
	sort(all(arr));
	int i = 0, j = n - 1, count = 0;
	while (i <= j) {
		if (arr[i] + arr[j] <= x) {
			count++;
			i++;
			j--;
		} else {
			count++;
			j--;
		}
	}
	cout << count << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
