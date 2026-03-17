#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    while(t--){
        // taking input of the length of array a , the minumum dys at resort and maximum confortable temprature
        long long n,k,q;

        vector<long long> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> b;


        for(int i=0;i<n;i++){
            if(a[i] < q){
                b.push_back(i+1);
                 }
                 // now i got the psoiible days on whihc i can go to vacati

        }


    // now to find the number ways i can go  -> 
    long long ans = 0;
    
    











    }

}