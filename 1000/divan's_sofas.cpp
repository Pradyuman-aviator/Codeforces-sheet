#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<pair<long long, int>> buildings;

        // Store (visits, original index)
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            buildings.push_back({x, i});
        }

        // Sort in descending order of visits
        sort(buildings.rbegin(), buildings.rend());

        vector<long long> ans(n + 1);
        ans[0] = 0;              // Divan's headquarters

        long long totalTime = 0;

        for (int i = 0; i < n; i++) {

            // Distances become:
            // 1 1 2 2 3 3 4 4 ...
            long long dist = (i / 2) + 1;

            long long position;

            if (i % 2 == 0)
                position = dist;
            else
                position = -dist;

            // original building number
            int originalIndex = buildings[i].second;

            ans[originalIndex + 1] = position;

            // Round trip
            totalTime += 2LL * buildings[i].first * dist;
        }

        cout << totalTime << "\n";

        for (int i = 0; i <= n; i++) {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}