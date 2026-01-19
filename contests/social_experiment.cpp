#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n; 
        int half = n/ 2;           
        if (half == 1) {
            cout << n << "\n";
        } 
        else if (n -half == 1) {
            half--;
            cout << abs(half - (n - half)) << "\n"; //// diff betwween 2 halfs
        } 
        else {
           
            cout << n % 2 << "\n";
        }
    }
    
    return 0;
}