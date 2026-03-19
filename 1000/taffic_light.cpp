#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        char c; // current color of light
        cin >> n;
        cin >> c;

        string s;
        cin >>s;
        int count = 0;
        int ans = INT_MIN;
       for(int i = 0; i < n; i++){
    if(s[i] == c){
        int dist = 0;
        int j = i;

        while(s[j % n] != 'g'){
            j++;
            dist++;
        }

        ans = max(ans, dist);
    }
}
        cout << ans << "\n";
    }
    return 0;

}
