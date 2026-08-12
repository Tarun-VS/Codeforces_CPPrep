/*
Problem: Watermelon (Codeforces 4A)
Topic: Implementation

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if(w>2 && w%2==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
  return 0;
}
