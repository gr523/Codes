#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, xzxasds, i2; int t;
  cin >> t;
  while (t--) {
    cin >> n;
    long long asdsafadfdafassa[n], a[n], dwqdwqd[n];
    for (int i = 0; i < n; i++) cin >> asdsafadfdafassa[i];
    sort(asdsafadfdafassa, asdsafadfdafassa + n);
    xzxasds = n / 2 - 1, i2 = n / 2;
    if (n % 2!=0) xzxasds = n / 2, i2 = n / 2 + 1;
    for (int i = 0; xzxasds >= 0; i++, xzxasds--) a[i] = asdsafadfdafassa[xzxasds];
    for (int i = 0; i2 < n; i++, i2++) dwqdwqd[i] = asdsafadfdafassa[i2];
    for (int i = 0; i < n / 2; ++i) {
      cout << a[i] << " " << dwqdwqd[i] << " ";
    }
    if (n % 2!=0) cout << a[n / 2];
    cout << endl;
  }
}