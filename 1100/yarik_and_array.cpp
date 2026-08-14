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

        sort(a.begin(), a.end());

        // fetching each element

        int Maxi = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            vector<int> temp;

            while (i + 1 < n && a[i + 1] == a[i] + 1)
            {
                temp.push_back(a[i]);
                i++;
            }

            temp.push_back(a[i]);

            int sum = accumulate(temp.begin(), temp.end(), 0);

            Maxi = max(sum, Maxi);
        }

        cout << Maxi << endl;
    }

    return 0;
}

