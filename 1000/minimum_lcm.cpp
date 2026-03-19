#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long ans_a = 1;
        long long ans_b = n-1;
        for(long long fac =2;fac*fac<=n;fac++){
            if(n % fac == 0){
                ans_a = n/fac;
                ans_b= n -  ans_a;
                break;

            }
        }
        cout<< ans_a <<" "<< ans_b<<endl;

        

    }
    return 0;

}

