#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int64 MOD = 1000000007LL;

int64 modpow(int64 base, int64 exp) {
    int64 res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return res;
}

int64 modinv(int64 x) {
    return modpow(x, MOD - 2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N, K;
    cin >> N >> K;

    if (N == 0) {
        cout << 0 << "\n";
    } else if (K == 0) {
        cout << 1 % MOD << "\n";
    } else if (K == 1) {
        cout << (N % MOD) << "\n";
    } else {
        long long numerator = (modpow(K, N) - 1 + MOD) % MOD;
        long long denominator = (K - 1) % MOD;
        long long total = (numerator * modinv(denominator)) % MOD;
        cout << total << "\n";
    }

    return 0;
}
