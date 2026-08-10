/*
Problem: Game with Integers (Codeforces 1845A)
Topic: Implementation

Time Complexity: O(t)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n%3==0){
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
    return 0;
}
