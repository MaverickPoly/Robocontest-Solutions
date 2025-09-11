#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007LL;

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    long long n;
    cin >> n;

    long long s = (n % MOD) * (n % MOD) % MOD;
    cout << s << endl;
  }

  return 0;
}
