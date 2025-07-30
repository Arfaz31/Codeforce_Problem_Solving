#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        string x;          // compressed string তৈরি করা হবে এখানে
        bool zero = false; // এটা চেক করার জন্য যে আগের কোনো '0' আমরা ইতিমধ্যে নিয়েছি কিনা
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                zero = false;
                x += '1';
            }
            else
            {
                if (!zero) // এবং আগের কোনো '0' আমরা নেইনি
                {
                    zero = true; // তাহলে এখন একটা '0' নিচ্ছি, যাতে পরপর একাধিক '0' না আসে
                    x += '0';
                }
                // যদি আগের ক্যারেক্টারও '0' হয়, তাহলে কিছু করব না (skip করে দিব)
            }
        }

        int one = count(x.begin(), x.end(), '1');
        int zeroCount = x.size() - one;

        if (one > zeroCount)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
    return 0;
}
