/*
Problem: Fox And Snake (Codeforces 510A)
Topic: implementation, 2D patterns

Time Complexity: O(m * n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << '#';
            }
            cout << endl;
        }
        else if (i % 4 == 1) {
            for (int j = 0; j < n - 1; j++) {
                cout << '.';
            }
            cout << '#' << endl;
        }
        else {
            cout << '#';

            for (int j = 0; j < n - 1; j++) {
                cout << '.';
            }
            cout << endl;
        }
    }
    return 0;
}
