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

        int mx = *max_element(a.begin(), a.end()); // max_element(a.begin(), a.end()) → এটা একটা iterator return করে যেটা pointing করে maximum element এর জায়গায়। Iterator কে dereference করতে * ব্যবহার করতে হয় যাতে আমরা সেই element এর value পাই।
        int mn = *min_element(a.begin(), a.end());

        cout << mx - mn << "\n";
    }
}
