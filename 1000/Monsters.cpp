#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin  >> t;
    while(t--){
        long long n,k;
        cin >> n>>k;
    // creating a map that gonna store the remainder or we can say that the health after the maximum attacks

    unordered_map<long long,vector<int>> mp;

    for(int i =1;i<=n;i++){
        long long a;
        cin >>a;
         long long r = a % k;
         if(r==0) r=k;
         // ow i have to store the reaminder and the coresspondng the indcies 
         mp[r].push_back(i);
    }
    // prinri g orde rhigesht first then the lowest
    for(long long r=k;r>=1;r--){
        if(mp.count(r)){
            for(int i=mp[r].size()-1;i>=0;i--){
                cout << mp[r][i] << " ";
            }
        }
    }

    cout << "\n";


    }
    return 0;
}


