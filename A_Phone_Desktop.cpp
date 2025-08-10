
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen = y / 2;
        int remain = screen * 7; // karon proti screen a boro app mane y 8 kore cell contain kore tahole baki thake 7ta;
        if (y % 2 != 0)
        {
            screen++;
            remain += 11; // karon y 2 diye divide nahole ekhono 1 ta y remai ache so porer arekta new screen a 4ta cell contain kore tahole baki thake 11ta;
        }
        if (x > remain)
        {
            x -= remain;      // x theke remain minus kora holo
            screen += x / 15; // ekhon x er jonno screen number
            if (x % 15 != 0)  // x jodi total screen cell 15 diye vag na gele ekhono 1 ta remain ache er jonno new arekta screen lagbe
            {
                screen++;
            }
        }
        cout << screen << endl;
    }
    return 0;
}

// solution-2

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y;
//         cin >> x >> y;
//         int ans = ceil(y / 2.0); // 1 ta screen only 2 ta y rakha jai karon 4ta kore cell eksathe mile 1ta y hoy
//         int rem = (15 * ans - y * 4); // 1×1 রাখার মতো ফাঁকা সেল= মোট সেল - ইউজড সেল
//         x -= rem;                     // ওই ফাঁকা জায়গাতে কিছু 1×1 অ্যাপ রাখা যদি x এখনো 0 এর বেশি হতো, তাহলে নিচের লুপে যাবে
//         // x -= rem = 6 - 18 = -12 👉 মানে: সব ১×১ অ্যাপ তো আগেই বসে গেছে — বরং জায়গা বেশি!
//         // x -= rem = 20 - 14 = 6 ➡️ এখন ৬টা 1×1 বাকি ⇒ while লুপে যাবে এবং নতুন স্ক্রিন বাড়াবে

//         while (x > 0)
//         {
//             ans += 1;
//             x -= 15;
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }
