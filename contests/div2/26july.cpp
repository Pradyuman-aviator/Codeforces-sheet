#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> w(n);
        for(auto& x : w) cin >> x;
        
     
        
        set<long long> vals(w.begin(), w.end());
        bool found = false;
        
        for(long long v : vals){
          
        }
        
     
        
        vector<long long> candidates;
        for(auto v : w){
            candidates.push_back(v-1);
            candidates.push_back(v+1);
        }
        
        for(long long k : candidates){
            if(k < 1) continue;
        
            bool any_eq = false;
            for(auto x : w) if(x == k) { any_eq = true; break; }
            if(any_eq) continue;

            if(w[0] <= k) continue;
        
            if(w[n-1] >= k) continue;

            int bal = 0;
            bool ok = true;
            for(int i = 0; i < n; i++){
                if(w[i] > k) bal++;
                else bal--;
                if(bal < 0){ ok = false; break; }
            }
            if(bal != 0) ok = false;
            
            if(ok){ found = true; break; }
        }
        
        cout << (found ? "YES" : "NO") << "\n";
    }
}