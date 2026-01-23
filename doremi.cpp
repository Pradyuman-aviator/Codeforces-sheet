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
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<long long, long long> mp;
        for (auto x : a) {
            mp[x]++;
        }

        if (mp.size() >= 3) {
            cout << "NO\n";
        } else {
            long long f1 = mp.begin()->second;
            long long f2 = mp.rbegin()->second;

            if (f1 == f2 || (n % 2 == 1 && abs(f1 - f2) == 1)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
