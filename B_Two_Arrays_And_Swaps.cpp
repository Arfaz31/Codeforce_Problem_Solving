#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for (int i = 0; i < n && i < k; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }
        int sumA = accumulate(a.begin(), a.end(), 0);
        cout << sumA << endl;
    }
    return 0;
}