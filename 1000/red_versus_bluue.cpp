#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;

        string s = "";

        int spaces = r % (b + 1);
        int length_of_Red = r / (b + 1);

        for(int times = 1; times <= b + 1; times++){
            for(int i = 0; i < length_of_Red; i++){
                s += 'R';
            }
            if(spaces > 0){
                s += 'R';
                spaces--;
            }
            if(times != b + 1){
                s += 'B';
            }
        }

        cout << s << endl;
    }
    return 0;
}