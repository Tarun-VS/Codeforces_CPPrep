/*
Problem: Line Trip (Codeforces 1901A)
Topic: Implementation

Time Complexity: O(n)
Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, x;
        cin >> n >> x;

        int prev=0;
        int ans=0;

        for(int i=0; i<n; i++){
            int a;
            cin >> a;

            ans=max(ans,a-prev);
            prev=a;
        }
        ans=max(ans,2*(x-prev));

        cout << ans << endl;
    }
    return 0;
}
