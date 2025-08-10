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
        string ans = "";

        for (int i = n - 1; i >= 0;)
        {
            if (s[i] == '0')
            {
                // Two-digit number ending with '0'
                int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0'); //	character → number রূপান্তর করে
                ans += (char)('a' + num - 1);
                i -= 3;
            }
            else
            {
                int num = s[i] - '0';
                ans += (char)('a' + num - 1);
                i--;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}

// ধরি:

//     i = 2 → s[i] = '0'

//     s[i - 2] = '1'

//     s[i - 1] = '5'

// Step by Step:

// (s[i - 2] - '0') = '1' - '0' = 49 - 48 = 1
// (s[i - 1] - '0') = '5' - '0' = 53 - 48 = 5

// num = 1 * 10 + 5 = 15

// এখন এই 15 মানে অক্ষরের নাম্বার 15 → 'o'

// 🔡 এখন অক্ষরে রূপান্তর:

// ans += (char)('a' + num - 1);

//     'a' = ASCII 97

//     num = 15 → 97 + 15 - 1 = 111

//     char(111) = 'o'

// 🎯 তাই 'o' অক্ষরটি পাওয়া গেল।
