#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long long n,k;
        cin >> n >> k;

        unordered_map<long long,vector<int>> mp;

        for(int i=1;i<=n;i++){
            long long a;
            cin >> a;

            long long r = a % k;
            if(r==0) r=k;

            mp[r].push_back(i);
        }

        vector<long long> keys;

        for(auto &p : mp)
            keys.push_back(p.first);

        sort(keys.begin(),keys.end(),greater<long long>());

        for(long long r : keys){
            for(int idx : mp[r])
                cout << idx << " ";
        }

        cout << "\n";
    }

    return 0;
}