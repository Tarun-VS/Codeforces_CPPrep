/*
Problem: HQ9+ (Codeforces 133A)
Topic: strings, implementation

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string p;
    cin >> p;

    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}
