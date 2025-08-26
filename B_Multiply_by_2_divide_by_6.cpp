#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int cnt2 = 0, cnt3 = 0;

        // count powers of 2
        while (n % 2 == 0)
        {
            n /= 2;
            cnt2++;
        }
        // count powers of 3
        while (n % 3 == 0)
        {
            n /= 3;
            cnt3++;
        }

        // যদি অন্য কোনো prime factor থেকে যায়
        if (n != 1)
        {
            cout << -1 << "\n";
            continue;
        }

        // যদি 2 এর সংখ্যা 3 এর থেকে বেশি হয়
        if (cnt2 > cnt3)
        {
            cout << -1 << "\n";
            continue;
        }

        // otherwise steps = 2*cnt3 - cnt2
        cout << 2 * cnt3 - cnt2 << "\n";
    }
}
