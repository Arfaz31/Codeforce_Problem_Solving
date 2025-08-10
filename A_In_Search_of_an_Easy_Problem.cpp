#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, opinion;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> opinion;
        if (opinion == 1)
        {
            cout << "HARD\n";
            return 0;
        }
    }
    cout << "EASY\n";
    return 0;
}
