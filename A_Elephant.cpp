#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int count_step = 0;
    while (true)
    {
        if (x <= 0)
            break;
        else
        {
            x -= 5;
            count_step++;
        }
    }
    cout << count_step << endl;
    return 0;
}