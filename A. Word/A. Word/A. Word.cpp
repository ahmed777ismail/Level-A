#include<iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using namespace std;
int main() {
    string word;
    int c1 = 0, c2 = 0;
    cin >> word;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
            c1++;
        else if (word[i] >= 'A' && word[i] <= 'Z')
            c2++;
    }
    if (c1 > c2) {
        for (int i = 0; i < word.size(); i++)

        {
            word[i] = tolower(word[i]);
        }
        cout << word;
    }
    else if (c1 < c2) {
        for (int i = 0; i < word.size(); i++)

        {
            word[i] = toupper(word[i]);
        }
        cout << word;
    }
    else {
        for (int i = 0; i < word.size(); i++)

        {
            word[i] = tolower(word[i]);
        }
        cout << word;

    }
}