/*
Problem: Wrong Subtraction (Codeforces 977A)
Topic: implementation, math

Time Complexity: O(k)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k--) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }

    cout << n;

    return 0;
}
