/*#include<bits/stdc++.h>
using namespace std;




int find_v(vector<long long>& a){

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        long long n ,x;
        cin >> n >> x;

        vector<long long> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];

        }
        vector<long long> b(n);
        sort(a.begin(),a.end());

        int max_matches =INT_MIN;
        int count1 =0;
        
        for(int i=0;i<n;i++){
            long long v =a[i];
            int count =0;
            for(int j=0;j<n;j++){
                if(v-a[j] <= x){
                    count++;
                    max_matches = max(max_matches,count);
                }
                else if{
                    
                }
                

                


            }

           
           
            

        }












    }






}
    */


    /// good problem a conceptual one

    #include<bits/stdc++.h>
    using namespace std;




    int main(){
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int t;

        cin >> t;

        while(t--){
            int n ,x;

            cin >> n >> x;

            vector<long long> a(n);

            for(long long i=0;i<n;i++){
                cin >> a[i];
            }

            vector<pair<long long,long long>> segments(n);


            for(int i=0;i<n;i++){
                segments[i] = {a[i] -x,a[i]+x};



            }


            long long ans = 0;

            long long l = segments[0].first;
            long long r = segments[0].second;

            for(int i =0;i<n;i++){

                l=max(l,segments[i].first);
                r=min(r,segments[i].second);
                if(l > r){

                    ans++;
                    l = segments[i].first;
                    r = segments[i].second;
                }

            }

            cout << ans << '\n';
            










        }






    } 