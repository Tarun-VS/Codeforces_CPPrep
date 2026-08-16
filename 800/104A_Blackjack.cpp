/*
Problem: Blackjack (Codeforces 104A)
Topic: implementation, math

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int queen = 10;
    int diff = n - queen;
    int ans = 0;

    if (diff <= 9 && diff >= 1)
        ans = 4;
    else if (diff == 10)
        ans = 15;
    else if (diff == 11)
        ans = 4;

    cout << ans << endl;

    return 0;
}
