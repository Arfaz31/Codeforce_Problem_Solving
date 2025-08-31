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
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                count1++;
            else
                count2++;
        }

        int total = count1 + 2 * count2;

        if (total % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (count1 == 0 && count2 % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
