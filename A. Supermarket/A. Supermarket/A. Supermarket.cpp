#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    double min_cost_per_kilo = 1e9; // A very large initial value

    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        min_cost_per_kilo = min(min_cost_per_kilo, a / b);
    }

    // Calculate the minimum total cost for 'm' kilos
    double result = min_cost_per_kilo * m;

    // Print with precision to avoid precision errors
    cout << fixed << setprecision(8) << result << endl;

    return 0;
}
