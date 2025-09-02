#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        if (n != 5)
        {
            cout << "NO\n";
            continue;
        }

        string correct = "Timur";
        sort(s.begin(), s.end());
        sort(correct.begin(), correct.end());

        if (s == correct)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
