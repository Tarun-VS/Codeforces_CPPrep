/*
Problem: Bear and Big Brother (Codeforces 791A)
Topic: implementation, while loop

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        ans++;
    }

    cout << ans;

    return 0;
}
