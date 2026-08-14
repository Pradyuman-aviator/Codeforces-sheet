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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int curr = a[0];
        int Maxi = a[0];

        for (int i = 1; i < n; i++)
        {
            if (abs(a[i] % 2) != abs(a[i - 1] % 2))
            {
                curr = max(0,curr) + a[i];
            }
            else
            {
                curr = a[i];
            }

            Maxi = max(curr,Maxi);
        }

        cout << Maxi << endl;
    }

    return 0;
}