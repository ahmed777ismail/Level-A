#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[110], d = 0;
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);

    for (int i = 0; i < 4; i++) {
        if (arr[i] == arr[i + 1])
            d++;
    }
    cout << d << endl;
    return 0;
}