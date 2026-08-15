/*
Problem: Helpful Maths (Codeforces 339A)
Topic: strings, map, frequency counting

Time Complexity: O(n log n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> freq;

    for (char c : s) {
        if (c != '+')
            freq[c]++;
    }

    bool first = true;

    for (auto x : freq) {
        for (int i = 0; i < x.second; i++) {
            if (!first)
                cout << '+';

            cout << x.first;
            first = false;
        }
    }

    return 0;
}
