/*
Problem: I Wanna Be the Guy (Codeforces 469A)
Topic: map, implementation

Time Complexity: O((p + q) log(p + q))
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p, q;
    cin >> p;

    map<int, int> count;

    for (int i = 0; i < p; i++) {
        int a;
        cin >> a;
        count[a]++;
    }

    cin >> q;

    for (int i = 0; i < q; i++) {
        int b;
        cin >> b;
        count[b]++;
    }

    if (count.size() == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}
