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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even_mismatch = 0; // even index এ ভুল element
        int odd_mismatch = 0;  // odd index এ ভুল element

        for (int i = 0; i < n; i++)
        {
            if (i % 2 != a[i] % 2)
            {
                if (i % 2 == 0)
                    even_mismatch++;
                else
                    odd_mismatch++;
            }
        }

        if (even_mismatch != odd_mismatch)
            cout << -1 << endl;
        else
            cout << even_mismatch << endl; // swaps = mismatch count
    }
    return 0;
}
