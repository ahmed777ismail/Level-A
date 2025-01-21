#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Calculate all possible values of the expression
    int result1 = a + b + c;
    int result2 = a * b * c;
    int result3 = (a + b) * c;
    int result4 = a * (b + c);

    // Find the maximum value
    int maxResult = max({ result1, result2, result3, result4 });

    cout << maxResult << endl;

    return 0;
}
