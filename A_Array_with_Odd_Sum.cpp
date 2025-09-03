#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        // apply rules
        if (odd > 0 && even > 0)
        {
            cout << "YES\n"; // mixture case
        }
        else if (odd == 0)
        {
            cout << "NO\n"; // all even
        }
        else
        { // all odd
            if (n % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
