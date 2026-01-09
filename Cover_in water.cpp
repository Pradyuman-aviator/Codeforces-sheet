#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans =0;
        for (int i= 0; i <n; ) {
            if (s[i]=='.') {
                ans++;
                i+= 3;   ///// COVERING THIS TWO AND NEXT POSITION
            } else {
                i++;
            }
        }
        cout << ans<<'\n';
    }
    return 0;
}
// BIG O(n)