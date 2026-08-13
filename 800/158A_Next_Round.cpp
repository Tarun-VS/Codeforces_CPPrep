/*
Problem: Next Round (Codeforces 158A)
Topic: implementation

Time Complexity: O(n)
Space Complexity: O(n)
*/

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int a[100];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
