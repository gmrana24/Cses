#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

ll dfs(vector<int>& arr, int index, ll sum, ll current) {
	if (index == arr.size()) return abs(sum - 2 * current);
	return min(dfs(arr, index + 1, sum, current + arr[index]), dfs(arr, index + 1, sum, current));
}

void solve() {
	ll n, sum = 0;
	cin >> n;
	vector<int> arr(n);
	for (int &i: arr) {
		cin >> i;
		sum += i;
	}
	cout << dfs(arr, 0, sum, 0l) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
