#include<bits/stdc++.h>
using namespace std;

int amin(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t;

    cin >> t;

    while(t--){

        long long n,k,b,s;
        cin >> n >> k >> b >> s;

         // Check feasibility
        if (s < b * k || s > b * k + (n - 1) * (k - 1)) {
            cout << -1 << '\n';
            continue;
        }

        vector<long long> a(n, 0);

        // Put all beauty in first element
        a[0] = b * k;

        long long rem = s - a[0];

        // Distribute remaining safely (< k per element)
        for (int i = 1; i < n; i++) {
            long long take = min(rem, k - 1);
            a[i] = take;
            rem -= take;
        }

        // If anything still left, add to first element
        a[0] += rem;

        // Output
        for (auto x : a) cout << x << " ";
        cout << '\n';
    }

    return 0;
}








    
