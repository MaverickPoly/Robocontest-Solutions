#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        int pos = k;
        for (int j = 0; j <= n; j++) {
            if (pos >= j) {
                pos = j + (n - 1 - pos);
            }
        }

        cout << pos << endl;
    }

    return 0;
}