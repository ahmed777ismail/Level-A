#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    string original, target;
    cin >> original >> target;

    int moves = 0;

    for (int i = 0; i < n; i++) {
        int o = original[i] - '0'; // Convert char to int
        int t = target[i] - '0';

        // Minimum moves between forward and backward rotation
        int diff = abs(o - t);
        moves += min(diff, 10 - diff);
    }

    cout << moves << endl;
    return 0;
}
