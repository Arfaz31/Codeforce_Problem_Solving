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
        vector<int> h(n);
        int count_1 = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> h[i];
            if (h[i] == 1)
            {
                count_1++;
            }
        }
        int spell1 = count_1 / 2;
        int total = spell1 + (n - spell1 * 2);
        cout << total << endl;
    }
    return 0;
}