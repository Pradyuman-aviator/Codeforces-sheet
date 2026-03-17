#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a = 0;
        int b = 0;
        bool hasodd = false;
        int unique = 0;

        for(int i = 0; i < n; i++){
            int count = 0;


            for(int j = 0; j < n; j++){
                if(s[i] == s[j]){
                    count++;
                }
            }

        
            bool seen = false;
            for(int k = 0; k < i; k++){
                if(s[k] == s[i]){
                    seen = true;
                    break;
                }
            }
            if(seen) continue;

            unique++;

    
            if(count % 2 == 1){
                hasodd = true;
            }

            
            if(count == 1){
                a++;
            } else {
                a++;
                b++;
            }
        }

        int ans = a + b;

    
        if(!hasodd && unique > 1){
            ans--;
        }

        cout << ans << "\n";
    }
}