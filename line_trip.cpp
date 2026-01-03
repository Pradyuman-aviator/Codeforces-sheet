#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;
         vector<long long> points;
        points.push_back(0);   
        for (int i = 0; i < n; i++) {
            long long p;
            cin >> p;
            points.push_back(p);
        }
        points.push_back(x);  

        long long max_dist = 0;

        for (int i = 1; i < points.size(); i++) {
            long long gap = points[i] - points[i - 1];        
            if (i == points.size() - 1) {
                gap *= 2;
            }
            max_dist = max(max_dist, gap);
        }
       cout << max_dist << '\n';
    }

    return 0;
}
