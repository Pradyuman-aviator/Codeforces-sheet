#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        

        int count0 = 0, count1 = 0;
        // by obsercation
        // count zeros and ones
        for (char c : s) {
            if (c == '0') count0++;
            else count1++;
        }

        // minimum deletions needed we need to make all characters same is the absolute difference between count of zeros and ones
        
        int length_of_t = 0;
        for (int i = 0; i < s.length(); i++) // n
        {
            if (s[i] == '0' && count1 > 0)
                count1--, length_of_t++;
            else if (s[i] == '1' && count0 > 0)
                count0--, length_of_t++;
            else
                break;
        }

        cout << s.length() - length_of_t << endl;
    }
    return 0;
}