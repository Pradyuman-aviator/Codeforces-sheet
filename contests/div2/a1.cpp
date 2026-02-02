#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int cntRow = 0, cntCol = 0;
        for (int x : a) {
            if (x <= h) cntRow++;
            if (x <= l) cntCol++;
        }

        cout << min({cntRow, cntCol, n / 2}) << "\n";
    }
    return 0;
}
