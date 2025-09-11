#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        int count = 0;
        for (int j = 1; j * j <= m; j++) {
            if (m % j == 0) {
                int a = j;
                int b = m / j;
                if (a % 2 == 0) count++;
                if (b % 2 == 0 && a != b) count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}