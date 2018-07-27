#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  vector<bool> prime (10001, true);
  prime[0] = prime[1] = false;
  for (int i = 2; i * i <= 10001; i++) {
    if (prime[i]) {
      for (int j = i * 2; j <= 10001; j += i)
        prime[j] = false;
    }
  }

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 10001;
    int i = 0, j = 1;
    while (i < n - 1) {
      int x = a[i] * a[j];
      if (prime[x]) ans = min(ans, x);

      j++;
      if (j == n) {
        i++; j = i + 1;
      }
    }

    cout << (ans == 10001 ? -1 : ans) << endl;
  }

  return 0;
}

