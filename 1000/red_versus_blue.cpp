#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n, r, b;
        cin >> n >> r >> b;
  int parts = b + 1;
        int base = r / parts;
        int extra = r % parts;
        string ans = "";
        for(int i = 0; i < parts; i++){
 
            int cnt = base + (i < extra ? 1 : 0);
            ans += string(cnt, 'R');

            if(i < b){
                ans += 'B';
            }
        }
        cout << ans << "\n";
    }

    return 0;
}