#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<char> stripe(n);
        for(int i = 0; i < n; i++){
            cin >> stripe[i];
        }

        int white = 0;

        // first window
        for(int i = 0; i < k; i++){
            if(stripe[i] == 'W') white++;
        }

        int ans = white;

        // sliding window
        for(int i = k; i < n; i++){
            if(stripe[i] == 'W') white++;
            if(stripe[i - k] == 'W') white--;

            ans = min(ans, white);
        }

        cout << ans << "\n";
    }

    return 0;
}