#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<long long,long long> frequency_map;
        for (int i = 0; i < n; i++) {
            frequency_map[a[i]]++;
        }

        if (frequency_map.size() >= 3) {
            cout << "NO\n";
        } 
        else if (frequency_map.size() == 2) {
            long long freq_1 = frequency_map.begin()->second;
            long long freq_2 = frequency_map.rbegin()->second;

            if (freq_1 == freq_2) {
                cout << "YES\n";
            } 
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1) {
                cout << "YES\n";
            } 
            else {
                cout << "NO\n";
            }
        } 
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
