
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int s = 0;
        while (n > 1)
        {
            n = n - k + 1;
            s++;
        }
        cout << s << endl;
    }
    return 0;
}

// ✅ উদাহরণ দিয়ে বোঝানো:
// 🧪 Test Case: n = 6, k = 3
// Code Flow:

// int s = 0;
// while (n > 1)
// {
//     n = n - k + 1;
//     s++;
// }

// Step-by-step:

//     শুরুতে n = 6, k = 3

//     অপারেশন ১: n = 6 - 3 + 1 = 4, s = 1

//     অপারেশন ২: n = 4 - 3 + 1 = 2, s = 2

//     অপারেশন ৩: n = 2 - 3 + 1 = 0 → এখন n <= 1, থামো

// ✅ Output: 3

// ➡️ বাস্তবে এর মানে:

//     6 → [1, 2, 3] (sum = 6)

//     2 → [1, 1]

//     3 → [1, 1, 1]

// শেষে আমরা {1,1,1,1,1,1} পেলাম।

// Another solution

// #include <iostream>
// using namespace std;

// int minOperations(int n, int k)
// {
//     if (n == 1)
//         return 0;
//     return (n + k - 3) / (k - 1);
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         cout << minOperations(n, k) << endl;
//     }
//     return 0;
// }