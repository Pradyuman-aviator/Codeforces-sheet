#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> second_elements;
        long long lowest_first_element = LLONG_MAX;

        for(int i = 0; i < n; i++){
            int m;
            cin >> m;

            vector<long long> a(m);
            for(auto &x : a){
                cin >> x;
            }

            sort(a.begin(), a.end());

            lowest_first_element = min(lowest_first_element, a[0]);
            second_elements.push_back(a[1]);
        }

        sort(second_elements.begin(), second_elements.end());

        long long sum = accumulate(second_elements.begin(), second_elements.end(), 0LL);

        long long answer = lowest_first_element + sum - second_elements[0];

        cout << answer << "\n";
    }

    return 0;
}