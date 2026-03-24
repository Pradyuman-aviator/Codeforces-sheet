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

    int ans = INT_MAX;

    for(int i = 0;i<=n-k;i++){
        int white = 0;

        for(int j = i ;j<i+k;j++){
            if(stripe[j]=='W') white++;

        }

        ans = min(ans,white);
        


       }

       cout << ans << "\n";

    

}

return 0;

}

