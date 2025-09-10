#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j+=i) {
                primes[j] = false;
            }
        }
    }
    
    int primeCount = 0;
    for (int i = 2; i <= n; i++) {
        if (primes[i]) primeCount++;
    }

    if (primeCount % 2 == 1) {
        cout << "Ali" << endl;
    } else {
        cout << "Bobur" << endl;
    }


    return 0;
}