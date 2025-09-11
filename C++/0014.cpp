#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1000000007LL;

long long modpow(long long base, long long exp) {
    base %= MOD;
    long long res = 1;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int main() {
    long long n, k;
    cin >> n >> k;

    long long result = modpow(k + 1, n);
    cout << result << endl;

    return 0;
}
