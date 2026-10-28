// PSRQ

#include <bits/stdc++.h>
using namespace std;

// Look closely at what happened to the binary representation of our number:
// • Initial \(24\): 11000 (divisible by \(2^{3}\))
// • After adding \(4\): 11100 (now only divisible up to \(2^{2}\))
// Whenever a number is divisible by \(2^{x}\) and you add \(2^{x-1}\) to it, it will never be divisible by \(2^{x}\) (or anything higher) ever again. It drops down and becomes permanently blocked from higher modifications.
// Because of this property, you only ever need to process the first time a specific value of \(x_{i}\) appears in a strictly decreasing sequence. Any future queries with an equal or larger value of \(x_{i}\) will have absolutely zero effect on the array.
// Since \(x_{i}\) can only be between \(1\) and \(30\), we can filter the array \(x\) down to a maximum of 30 useful operations total!

void solve() {
    int n, q;   
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> unique_x;
    for (int i =0; i < q; i++) {
        int val;
        cin >> val;
        if (unique_x.empty() || val < unique_x.back()) {
            unique_x.push_back(val);
        }
    }
    for (int x_val : unique_x) {
        for (int j = 0; j < n; j++) {// (1 << x_val) is a fast bitwise way to write 2^x_val (cool )
            if (a[j] % (1 << x_val) == 0) {
                a[j] += (1 << (x_val - 1));
            }
        }
    } 
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
