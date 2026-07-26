#include <bits/stdc++.h>
using namespace std;

string construct(int n, int k, char start){
    int num_runs = n - k;
    char other = (start == '0') ? '1' : '0';
    
    int start_run_count = (num_runs + 1) / 2;
    int other_run_count = num_runs / 2;
    
    int start_chars = (start == '0') ? (n+1)/2 : n/2;
    int other_chars = (start == '0') ? n/2 : (n+1)/2;
    
    int extra_start = start_chars - start_run_count;
    int extra_other = other_chars - other_run_count;
    
    if(extra_start < 0 || extra_other < 0) return "";
    
    string s = "";
    bool use_start = true;
    bool first_start = true, first_other = true;
    
    for(int r = 0; r < num_runs; r++){
        int len;
        char c;
        if(use_start){
            c = start;
            len = first_start ? 1 + extra_start : 1;
            first_start = false;
        }
        else{
            c = other;
            len = first_other ? 1 + extra_other : 1;
            first_other = false;
        }
        for(int i = 0; i < len; i++) s += c;
        use_start = !use_start;
    }
    
    return s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        if(k == n-1){
            cout << -1 << "\n";
            continue;
        }
        
        string ans = construct(n, k, '0');
        if(ans.empty()) ans = construct(n, k, '1');
        if(ans.empty()) ans = "-1";
        
        cout << ans << "\n";
    }
    return 0;
}