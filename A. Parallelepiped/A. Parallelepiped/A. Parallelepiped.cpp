#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;  // Read the three face areas

    // Compute the edge lengths
    int l = sqrt((A * C) / B);
    int w = sqrt((A * B) / C);
    int h = sqrt((B * C) / A);

    // Compute the total sum of all edges
    int perimeter = 4 * (l + w + h);

    cout << perimeter << endl;  // Output the result

    return 0;
}
