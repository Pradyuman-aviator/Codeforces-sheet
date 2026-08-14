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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0;

        for (int k = 1; k <= n; k++)
        {
            if (n % k == 0)
            {
                long long maxi = LLONG_MIN;
                long long mini = LLONG_MAX;

                for (int i = 0; i < n; i += k)
                {
                    long long sum = 0;

                    for (int j = i; j < i + k; j++)
                    {
                        sum += a[j];
                    }

                    maxi = max(maxi, sum);
                    mini = min(mini, sum);
                }

                ans = max(ans, maxi - mini);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}