#include <bits/stdc++.h>

using namespace std;

/* Fibonacci Numbers */
int main() {
    int n;
    cin >> n;

    long long a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        long long temp = a;
        a = b;
        b = temp + b;
    }
    cout << a * 2 << endl;
    return 0;
}
