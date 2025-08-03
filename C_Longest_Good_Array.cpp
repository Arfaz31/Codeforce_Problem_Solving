
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        long long l, r;
        cin >> l >> r;

        if (l == r)
        {
            cout << 1 << endl;
            continue;
        }

        long long prev = l;
        l++;               // next value after first element
        long long ans = 2; // already have two elements: prev, l

        while (true)
        {
            long long diff = l - prev;
            long long newDiff = diff + 1;
            long long need = l + newDiff;

            if (need <= r)
            {
                ans++;
                prev = l;
                l = need;
            }
            else
            {
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     long long tt;
//     cin >> tt;
//     while (tt--)
//     {
//         long long l, r;
//         cin >> l >> r;
//         if (l == r)
//         {
//             cout << 1 << endl;
//             continue;
//         }
//         long long prev = l;
//         l++;
//         long long ans = 2;
//         while (1)
//         {
//             long long need = (2 * l) - prev + 1;
//             prev = l;
//             if (need <= r)
//             {
//                 ans++;
//                 l = need;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }