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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long mn = *min_element(a.begin(), a.end());
        long long ans = 0;
        for (auto x : a)
            ans += (x - mn);

        cout << ans << "\n";
    }
    return 0;
}