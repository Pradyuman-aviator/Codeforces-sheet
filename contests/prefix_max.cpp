#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        } 
        int maxIdx = 0;
        for(int i = 1; i < n; i++) {  // finding the index of the maximum element

            //also tried sorting but it is not allowed(atmost 1 swap)
            if(a[i]>a[maxIdx]) {
                maxIdx = i;
            }
        }   
        swap(a[0], a[maxIdx]); //// swaping the max to fist to alwys have max at start
        long long sum = 0;
        int currentMax = 0;
        for(int i = 0; i < n; i++) {
            currentMax = max(currentMax, a[i]);
            sum += currentMax;
        } 
        cout << sum << "\n";
    }
    
    return 0;
}