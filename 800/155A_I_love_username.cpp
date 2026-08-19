/*
Problem: I_love_%username% (Codeforces 155A)
Topic: arrays, implementation

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];
    int min = a[0];
    int amazing = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            amazing++;
            max = a[i];
        }
        else if (a[i] < min) {
            amazing++;
            min = a[i];
        }
    }

    cout << amazing << endl;
    return 0;
}
