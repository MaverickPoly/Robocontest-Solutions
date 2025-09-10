#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> inp(n);

    for (int i = 0; i < n; i++) cin >> inp[i];

    for (int i = 0; i < n; i++) {
        if (count(inp.begin(), inp.end(), inp[i]) == 1) {
            cout << inp[i] << endl;
            break;
        }
    }


    return 0;
}
