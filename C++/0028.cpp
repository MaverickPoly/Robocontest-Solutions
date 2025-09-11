#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;

        // int cx = bx - ax, cy = by - ay;
        // cout << bx + cx << " " << by + cy << endl;

        cout << bx * 2 - ax << " " << by * 2 - ay << endl;
    }

    return 0;
}
