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

        stack<char> st;
        int moves = 0;

        for (char c : s)
        {
            if (c == '(')
            {
                st.push(c);
            }
            else
            { // c == ')'
                if (!st.empty())
                {
                    st.pop(); // matched with '('
                }
                else
                {
                    moves++; // unmatched ')'
                }
            }
        }

        cout << moves << endl;
    }
    return 0;
}
