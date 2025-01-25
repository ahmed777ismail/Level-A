#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Find the minimum of n and m
    int minSticks = min(n, m);

    // Determine the winner based on the parity of minSticks
    if (minSticks % 2 == 0) {
        cout << "Malvika" << endl;
    }
    else {
        cout << "Akshat" << endl;
    }

    return 0;
}
