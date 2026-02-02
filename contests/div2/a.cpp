#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int both = 0;   
        int onlyRow = 0;  
        int onlyCol = 0;  
        
        for (int i = 0; i < n; i++) {
            if (a[i] >= 1 && a[i] <= min(h, l)) {
                both++;
            } 
            else if (a[i] > min(h, l) && a[i] <= h) {
                onlyRow++;
            } 
            else if (a[i] > min(h, l) && a[i] <= l) {
                onlyCol++;
            }
        }
        
     
        
        int pairs = min(onlyRow, onlyCol);  
        int remRow = onlyRow - pairs;
        int remCol = onlyCol - pairs;
        int remBoth = both;
     
        int temp = min(remRow, remBoth);
        pairs += temp;
        remBoth -= temp;
        remRow -= temp;
        
        temp = min(remCol, remBoth);
        pairs += temp;
        remBoth -= temp;
        remCol -= temp;
        
        pairs += remBoth / 2;
        pairs = min(pairs, n / 2);  
        
        cout << pairs << endl;
    }
    
    return 0;
}