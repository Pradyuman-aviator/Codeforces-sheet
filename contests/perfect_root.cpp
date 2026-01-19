#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        for(inti =1; i <=n; i++) {
            cout << i;
            if(i<n) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}