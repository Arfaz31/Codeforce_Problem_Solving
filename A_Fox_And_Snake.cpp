#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            // odd row (0-based even) → print all '#'
            for (int j = 0; j < m; j++)
                cout << "#";
        }
        else
        {
            // even rows: alternate tail position
            if (((i / 2) % 2) == 0)
            {
                // tail on right
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else
            {
                // tail on left
                cout << "#";
                for (int j = 1; j < m; j++)
                    cout << ".";
            }
        }
        cout << "\n";
    }

    return 0;
}
