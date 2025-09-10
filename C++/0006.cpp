#include <bits/stdc++.h>

using namespace std;

bool isLeap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main() {
    int year;
    cin >> year;

    char buff[20]; 

    if (isLeap(year)) {
        sprintf(buff, "12/09/%.04d", year);
    } else {
        sprintf(buff, "13/09/%.04d", year);
    }

    string result = buff;
    cout << result << endl;

    return 0;
}
