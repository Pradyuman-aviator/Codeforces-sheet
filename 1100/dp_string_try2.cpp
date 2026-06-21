#include <bits/stdc++.h>
using namespace std;
 // idk what is dp yet so this solution what yeah it gonna explode for 10^5 operations
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<string> st;
        queue<string> q;

        st.insert(s);
        q.push(s);

        while (!q.empty())
        {
            string cur = q.front();
            q.pop();

            if (cur.size() <= 1)
                continue;

            string a = cur.substr(1);

            string b = cur;
            b.erase(1, 1);

            if (!st.count(a))
            {
                st.insert(a);
                q.push(a);
            }

            if (!st.count(b))
            {
                st.insert(b);
                q.push(b);
            }
        }

        cout << st.size() << '\n';
    }
}

