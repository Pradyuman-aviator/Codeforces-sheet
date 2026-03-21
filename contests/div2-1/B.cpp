#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >>a[i];
        }
       /* for (int i = 0; i < n; i++) {
            /// i am gonna f*ck that k 
            ///int count1 = 1;


            int count= 0;




            for (int j =i+1; j< n; j++) {
                if (a[j]!=a[i]) count++;
            }
            cout << count;
            if (i<n- 1) cout <<" ";
        }
        cout <<"\n";
    }
    return 0;

}
    */

        for (int i = 0; i<n; i++) {
            int less =0,greater = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) {
                    less++;
                }
                else if (a[j] > a[i]) greater++;
            }
            cout << max(less, greater);
            if (i < n - 1)cout <<" ";
        }
        cout << "\n";
    }
    return 0;

}