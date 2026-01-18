#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<string> texts(n);
    vector<string> isLLM(n);
    int maxLen = 0;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        maxLen = max(maxLen, m);
        cin >> texts[i] >> isLLM[i];
    }
    
    // Precompute log2 values
    int MAX = 0;
    for (auto &t : texts) MAX += t.size();
    vector<double> lg(MAX + 1, 0.0);
    for (int i = 1; i <= MAX; i++) {
        lg[i] = log2((double)i);
    }
    
    // For each context size k
    for (int k = 0; k <= maxLen; k++) {
        // Map: context -> (next_token -> count)
        map<string, map<char, int>> mp;
        map<string, int> tot;
        
        for (int i = 0; i < n; i++) {
            int m = texts[i].size();
            for (int j = 0; j < m; j++) {
                // Only consider LLM-generated positions
                if (isLLM[i][j] != 'L') continue;
                
                // Build context: last k tokens before position j
                int start = max(0, j - k);
                string ctx = texts[i].substr(start, j - start);
                
                char token = texts[i][j];
                mp[ctx][token]++;
                tot[ctx]++;
            }
        }
        
        // Calculate minimum loss (entropy)
        double loss = 0.0;
        for (auto &[ctx, tokenCounts] : mp) {
            int T = tot[ctx];
            loss += T * lg[T];
            for (auto &[token, c] : tokenCounts) {
                loss -= c * lg[c];
            }
        }
        
        cout << fixed << setprecision(10) << loss << "\n";
    }
    
    return 0;
}