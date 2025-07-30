#include <iostream>
using namespace std;

int minOperations(int n, int k)
{
    if (n == 1)
        return 0;
    return (n + k - 3) / (k - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << minOperations(n, k) << endl;
    }
    return 0;
}