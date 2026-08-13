/*
Problem: Anton and Danik (Codeforces 734A)
Topic: strings, counting

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')
            cnt1++;
        else
            cnt2++;
    }

    if (cnt1 > cnt2)
        cout << "Anton";
    else if (cnt1 < cnt2)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
