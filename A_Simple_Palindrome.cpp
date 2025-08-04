#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string vowels = "aeiou";
    while (t--)
    {
        int n, vowelSeq, rem;
        cin >> n;
        vowelSeq = n / 5;
        rem = n % 5;
        string res = "";

        while (vowelSeq--)
        {
            res += vowels;
        }
        for (int i = 0; i < rem; i++)
        {
            res += vowels[i];
        }
        sort(res.begin(), res.end());
        cout << res << endl;
    }

    return 0;
}