#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    int totalWidth = 0;

    for (int i = 0; i < n; i++)
    {
        int height;
        cin >> height;
        if (height > h)
            totalWidth += 2; // বাঁকিয়ে হাঁটবে
        else
            totalWidth += 1; // সোজা হাঁটবে
    }

    cout << totalWidth << "\n";
    return 0;
}
