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
        string s;
        cin >> s;
        
        // Initialize a flag to check for three continuous empty cells
        bool continuous_three_empty_cells = false;
        // Initialize a counter for the total number of empty cells
        int total_count_of_empty_cells = 0;

        // Iterate through the cells
        for (int i = 0; i < n; i++) // Loop through each cell
        {
            // Check if there are three continuous empty cells
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                continuous_three_empty_cells = true; // Set the flag to true if found
                break; // No need to check further if we found three continuous empty cells
            }
            // Count the number of empty cells
            if (s[i] == '.')
                total_count_of_empty_cells++;
        }

        
        if (continuous_three_empty_cells)
            cout << 2 << endl;
        else
           
    }
    return 0;
}

