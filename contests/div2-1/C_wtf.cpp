#include <bits/stdc++.h>
using namespace std;
int query(int i, int j) {
    cout << "? "<<i<<" " << j<<"\n";
    cout.flush();
    int res;
    cin >>res;
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        bool found=false;  
        for (int j = 2;j <= n + 1;j++) {
            int res =query(1,j);
            if (res ==-1) {
                return 0;
            }
            if (res ==1) {
                cout << "! 1\n";
                cout.flush();
                found = true;
                break;
            }
        }
        if (!found) {
            cout <<"! "<<(n + 2)<<"\n";
                        cout.flush();
        }
    }
    
    return 0;
}


// this is a pure bet . . . . . . . .