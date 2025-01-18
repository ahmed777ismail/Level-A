#include <iostream>
#include<string.h>
#include<algorithm>
#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int a = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (arr[j] == a) {
                cout << j << " ";
                a++;
                break;
            }
            else
                continue;
        }
    }
    return 0;
}