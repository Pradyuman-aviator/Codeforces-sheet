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
        string temp = s + s;  // creating two strings so i can tervarse from right
       
      int last_g = -1;
int ans = 0;

for(int i = 2*n - 1; i >= 0; i--){
    if(temp[i] == 'g'){
        last_g = i; // fetching index of that g ligh 
    }
    if(temp[i] == c && last_g != -1){
        ans = max(ans, last_g - i);
    }
}
cout << ans << "\n";
   

}
 return 0;
}
