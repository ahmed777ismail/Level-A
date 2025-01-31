#include <iostream>
using namespace std;

int main() {
    long long l, r;
    cin >> l >> r;

    if (r - l < 2) {
        cout << -1 << endl;
    }
    else {
        if (l % 2 != 0) {
            l++;  // Make l even if it's odd
        }
        if (l + 2 > r) {
            cout << -1 << endl;
        }
        else {
            cout << l << " " << (l + 1) << " " << (l + 2) << endl;
        }
    }

    return 0;
}
