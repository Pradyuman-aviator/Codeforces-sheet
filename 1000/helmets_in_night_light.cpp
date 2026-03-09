#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {

        long long n, p;
        cin >> n >> p;

        vector<long long> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<pair<long long,long long>> v;

        for(int i = 0; i < n; i++) {
            v.push_back({b[i], a[i]});
        }

        sort(v.begin(), v.end());

        long long cost = p;          // first person informed directly
        long long remaining = n - 1; // people left to inform

        for(auto &it : v) {

            long long shareCost = it.first;
            long long capacity = it.second;

            if(shareCost >= p) break;

            long long use = min(capacity, remaining);

            cost += use * shareCost;
            remaining -= use;

            if(remaining == 0) break;
        }

        cost += remaining * p;

        cout << cost << "\n";
    }

}