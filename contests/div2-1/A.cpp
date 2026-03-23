#include <bits/stdc++.h>
using namespace std;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    // cin << t; wtf ? 
    while (t--){
                long long n, c, k;
        cin >> n >> c >> k;
                vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

                        sort(a.begin(), a.end());

        for (int i =0;i < n;i++) {
            if (a[i]<= c) {
                long long extra =min(k, c-a[i]);
                k-= extra;
                c += a[i] + extra;
            } else break;
 
        }
      
        cout << c << "\n";
    }

    return 0;
}