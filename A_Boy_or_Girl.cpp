#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string s2;
    bool fre[26] = {false};
    for (int i = 0; i < s.length(); i++)
    {
        if (fre[s[i] - 'a'] == false)
        {
            fre[s[i] - 'a'] = true;
            s2 += s[i];
        }
    }
    if (s2.length() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}