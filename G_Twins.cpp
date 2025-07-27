#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }

    sort(v.begin(), v.end(), greater<int>());
    int mysum = 0;
    int count = 0;
    int remainCoinSum = 0;
    for (int i : v)
    {
        mysum += i;
        count++;
        remainCoinSum = total - mysum;
        if (mysum > remainCoinSum)
        {
            cout << count << endl;
            return 0;
        }
    }

    return 0;
}