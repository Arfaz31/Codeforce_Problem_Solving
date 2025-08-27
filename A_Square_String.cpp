#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        if (n % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        int half = n / 2;
        if (s.substr(0, half) == s.substr(half)) // string.substr(pos, len) মানে হচ্ছে মূল string এর মধ্যে থেকে pos ইনডেক্স থেকে শুরু করে len ক্যারেক্টার কেটে আনা।
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}