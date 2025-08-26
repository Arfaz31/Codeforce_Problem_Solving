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

        if ((n / 2) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            vector<int> ans;

            // first n/2 even numbers
            for (int i = 1; i <= n / 2; i++)
            {
                ans.push_back(2 * i);
            }

            // first n/2 - 1 odd numbers
            for (int i = 1; i < n / 2; i++)
            {
                ans.push_back(2 * i - 1);
            }

            // last odd number to balance sum
            ans.push_back(3 * (n / 2) - 1);

            for (int x : ans)
                cout << x << " ";
            cout << endl;
        }
    }
}
