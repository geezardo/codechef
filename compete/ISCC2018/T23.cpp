#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  function<int(int,int)> gcd = [&gcd](int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
  };

  while (t--) {
    int n;
    cin >> n;

    if (n == 1) {
      int x;
      cin >> x;

      if (x == 1)
        cout << "YES";
      else
        cout << "NO";
    }
    else {
      int a, b;
      cin >> a;

      while (--n) {
        cin >> b;
        a = gcd(a, b);
      }

      if (a > 1)
        cout << "NO";
      else
        cout << "YES";
    }

    cout << endl;
  }

  return 0;
}

