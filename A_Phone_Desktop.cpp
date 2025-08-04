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
        int ans = ceil(y / 2.0);
        int rem = (15 * ans - y * 4); // 1×1 রাখার মতো ফাঁকা সেল= মোট সেল - ইউজড সেল
        x -= rem;                     // ওই ফাঁকা জায়গাতে কিছু 1×1 অ্যাপ রাখা যদি x এখনো 0 এর বেশি হতো, তাহলে নিচের লুপে যাবে
        // x -= rem = 6 - 18 = -12 👉 মানে: সব ১×১ অ্যাপ তো আগেই বসে গেছে — বরং জায়গা বেশি!
        // x -= rem = 20 - 14 = 6 ➡️ এখন ৬টা 1×1 বাকি ⇒ while লুপে যাবে এবং নতুন স্ক্রিন বাড়াবে

        while (x > 0)
        {
            ans += 1;
            x -= 15;
        }
        cout << ans << '\n';
    }
    return 0;
}
