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
        string s;
        cin >> s;
        vector<int> v(n);
        int sz = s.size();
        int l = 1;
        int r = n;

        for (int i = n - 2; i >= 0; i--) // as 0 based index and string length is n-1 that's why i = n-2;
        {
            if (s[i] == '<')
            {
                v[i + 1] = l;
                l++;
            }
            else
            {
                v[i + 1] = r;
                r--;
            }
        }

        v[0] = l;

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}