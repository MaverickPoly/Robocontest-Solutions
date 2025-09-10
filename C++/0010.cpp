#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    long long n;
    long long a, b, c;

    cin >> n;
    cin >> a >> b >> c;

    if (a + b + c >= n) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}
