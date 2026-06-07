#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)

using namespace std;

void solve() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 1 << endl;
  } else if (n < 4) {
    cout << "NO SOLUTION" << endl;
  } else {
    int even, odd;
    if (n & 1) {
      odd = n;
      even = odd - 1;
    } else {
      even = n;
      odd = even - 1;
    }
    for (int i = odd; i > 0; i -= 2) {
			cout << i << " ";
    }
    for (int i = even; i > 0; i -= 2) {
			cout << i <<  " ";
    }
		cout << endl;
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
