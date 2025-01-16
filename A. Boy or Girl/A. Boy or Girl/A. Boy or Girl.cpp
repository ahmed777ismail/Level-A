#include <iostream>
using namespace std;
int main() {
    string w;
    int s = 0;
    cin >> w;
    int a[26];
    for (int i = 0; i < 26; i++)
        a[i] = 0;
    for (int i = 0; i < w.length(); i++)
        a[w[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (a[i] > 0)
            s++;
    if (s % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}