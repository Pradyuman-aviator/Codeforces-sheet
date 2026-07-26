#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> l(n), r(n), u(n), v(n);
        for(int i = 0; i < n; i++)
            cin >> l[i] >> r[i] >> u[i] >> v[i];
        int ans = 0;
        for(int m = n; m >= 1; m--){
            int j = 0; 
            bool ok = false;
            for(int i = 0; i < n && j < m; i++){
                int pos = j + 1;        // 1-indexed left rank
                int rrank = m - pos + 1; // right rank
                bool left_ok = (pos < l[i] || pos > r[i]);
                bool right_ok = (rrank < u[i] || rrank > v[i]);
                if(left_ok && right_ok){
                    j++;
                }
            }
            if(j == m){
                ans = m;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}