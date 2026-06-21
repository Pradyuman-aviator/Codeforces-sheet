#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> st;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (!st.count(s[i])) {
                ans += (n - i);
                st.insert(s[i]);
            }
        }

        cout << ans << "\n";
    }
}


///// explanation written by GPT (chat)

// If a character is seen for the first time at index i,
// it contributes (n - i) new obtainable strings.
// Duplicate occurrences contribute nothing new because
// their generated strings were already counted when the
// character first appeared.