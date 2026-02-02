#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                found = true;
                break;
            }
        }

        cout << (found ? "YES\n" : "NO\n");
    }
    return 0;
}
