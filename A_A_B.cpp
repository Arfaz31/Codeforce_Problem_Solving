#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ss;
        cin >> ss;
        int a, b;
        a = ss[0] - '0';
        b = ss[2] - '0';
        cout << a + b << endl;
    }
    return 0;
}