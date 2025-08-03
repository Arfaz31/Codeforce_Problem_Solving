#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (
            (n == a && n == b) || // Case 1
            (
                a <= n && b <= n && // Case 2 - Basic bounds
                n - b + 1 > a &&    // Case 2a - Suffix positioning.This checks if there is enough space to place the prefix before the suffix starts.
                n - b + 1 - a > 2   // Case 2b - This checks that the prefix and suffix do not overlap, and there are more than 2 empty positions between them.
                ))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
