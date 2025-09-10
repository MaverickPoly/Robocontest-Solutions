#include <bits/stdc++.h>

using namespace std;

int main() {
    int z;
    cin >> z;

    if (z == 0) {
        cout << -1 << endl;
        return 0;
    }


    long long cnt = 0;

    if (z < 0) {
        z = -z;
        int q = sqrt(z);
        if (pow(q, 2) == z) {
            cnt--;
        } 
    }

    for (int i = 1; i * i <= z; i++) {
        if (z % i == 0) cnt += 2;
    }

    cout << cnt << endl;


    return 0;
}