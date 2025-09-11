#include <bits/stdc++.h>

using namespace std;

typedef long long int64;

bool isGreat(int64 num) {
    string str = to_string(num);
    int64 s = 0;
    for (int i = 0; i < str.size(); i++) {
        s += str[i] - '0';
    }

    if (s == 0) return false;

    s *= s;
    bool res = num % s == 0;
    return res;
}

int main() {
    int n;
    cin >> n;

    vector<int64> numbers;

    int64 current = 0;
    while(numbers.size() != n) {
        if (isGreat(current) == 1) {
            numbers.push_back(current);
        }

        current++;
    }
    cout << numbers.at(n - 1) << endl;
    return 0;
}