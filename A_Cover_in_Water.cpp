
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
        int ans = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                ans++;
            }
            else
                count = 0;
            if (count >= 3)
                break;
        }
        if (count >= 3)
            cout << 2 << endl;
        else
            cout << ans << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         string s;
//         cin >> n >> s;

//         bool flag = true;
//         int count = 0;

//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == '.')
//                 count++; // Count total empty cells

//             // Check if there are three consecutive empty cells: "..."
//             if (i > 0 && i < n - 1)
//                 if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
//                 {
//                     cout << 2 << endl; // Assume 2 actions are enough for any "..."
//                     flag = false;      // Set flag to false to skip the default case
//                     break;             // No need to check further
//                 }
//         }

//         // If no "..." found, print total number of empty cells
//         if (flag)
//             cout << count << endl;
//     }

//     return 0;
// }
