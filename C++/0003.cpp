#include <bits/stdc++.h>

using namespace std;

string addStrings(string a, string b) {
    if (a.size() < b.size()) swap(a, b);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    string result = "";
    int carry = 0;

    for (int i = 0; i < a.size(); i++) {
        int digitA = a[i] - '0';
        int digitB = i < b.size() ? b[i] - '0' : 0;

        int sum = digitA + digitB + carry;
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    if (carry) result.push_back(carry + '0');

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    string a, b;
    cin >> a; cin >> b;

    cout << addStrings(a, b) << endl;

    return 0;
}
