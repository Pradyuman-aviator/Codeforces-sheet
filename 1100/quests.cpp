#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        long long PrefixA = 0;
long long mxB = 0;
long long answer = 0;

for (int i = 0; i < min(n, k); i++)
{
    PrefixA += a[i];
    mxB = max(mxB, 1LL * b[i]);

    long long curr = PrefixA + 1LL * (k - i - 1) * mxB;

    answer = max(answer, curr);
}

cout << answer << '\n';


    }
}