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
        int maxLen = 0, curLen = 0, x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
            {
                curLen++;
                maxLen = max(maxLen, curLen);
            }
            else
            {
                curLen = 0;
            }
        }
        cout << maxLen << "\n";
    }
    return 0;
}
