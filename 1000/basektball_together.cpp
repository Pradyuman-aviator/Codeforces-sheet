#include <bits/stdc++.h>
using namespace std;
int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {

        int N,D;
        cin >> N >> D;

        vector<long long> power(N);
        for(int i = 0;i<N;i++){
            cin >> power[i];
        }

           sort(power.begin(),power.end());

           ///applying the bindayr search
           
           int left = -1;
           int right = N-1;
           int teams = 0;
           int teamsize =1;

           while(left<=right){
            if(power[right]*teamsize >= D && left < right){
                left++;
                teamsize++;

            }
            else{
                teams++;
                right--;
                teamsize = 1;


            }
           }






        
           cout << teams << "\n";

    }
    return 0;
    
}