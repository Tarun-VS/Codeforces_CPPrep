/*
Problem: Halloumi Boxes (Codeforces 1903A)
Topic: Implementation

Time Complexity: O(n log n)
Space Complexity: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;

    while(cases--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        if(k>1 || is_sorted(a.begin(), a.end())){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
