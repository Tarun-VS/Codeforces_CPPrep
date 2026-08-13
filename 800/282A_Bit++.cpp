/*
Problem: Bit++ (Codeforces 282A)
Topic: implementation, simulation

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;
    string s;

    while (n--) {
        cin >> s;

        if (s[1] == '+')
            x++;
        else
            x--;
    }

    cout << x;

    return 0;
}
