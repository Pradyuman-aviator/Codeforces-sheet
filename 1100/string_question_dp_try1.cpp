#include <bits/stdc++.h>
using namespace std;

// function to check whethere there is repeating words or not

string getPattern(string s) {
    int n = s.size();

    for(int len = 1; len <= n / 2; len++) {
        if(n % len == 0) {
            string part = s.substr(0, len);

            string temp = "";
            for(int i = 0; i < n / len; i++)
                temp += part;

            if(temp == s)
                return part;
        }
    }

    return s; // no repeating pattern
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        cin >> n;

        string s;

        for(int i =0;i<n;i++){
            cin >> s[i];
        }

        //checking for reapeating pattrens
        //if there is no pattrens fucnciton will return the string itself

        string s_new = getPattern(s);

        
        

        






    }
}