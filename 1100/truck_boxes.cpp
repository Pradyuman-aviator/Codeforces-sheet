#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;

        cin >> n;

        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];

        }

        sort(a.rbegin(),a.rend());

        int i = a[0];

        int j = a[n-1];


        cout << abs(i-j) << endl;
    }
    return 0;
}