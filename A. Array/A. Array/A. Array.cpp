#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> negatives, positives, zeros;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (num < 0)
            negatives.push_back(num);
        else if (num > 0)
            positives.push_back(num);
        else
            zeros.push_back(num);
    }

    vector<int> set1, set2, set3;

    // First set: Needs exactly 1 negative number
    set1.push_back(negatives.back());
    negatives.pop_back();

    // Second set: Needs at least one positive number
    if (!positives.empty()) {
        set2 = positives;
    }
    else {
        // If no positive numbers, take two negative numbers to make product positive
        set2.push_back(negatives.back());
        negatives.pop_back();
        set2.push_back(negatives.back());
        negatives.pop_back();
    }

    // Third set: Remaining numbers go here
    set3 = negatives;
    set3.insert(set3.end(), zeros.begin(), zeros.end());

    // Output results
    cout << set1.size() << " ";
    for (int num : set1) cout << num << " ";
    cout << endl;

    cout << set2.size() << " ";
    for (int num : set2) cout << num << " ";
    cout << endl;

    cout << set3.size() << " ";
    for (int num : set3) cout << num << " ";
    cout << endl;

    return 0;
}
