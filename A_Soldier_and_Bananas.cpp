#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int totalCost = k * w * (w + 1) / 2;
    int borrow = totalCost - n;

    if (borrow < 0)
        borrow = 0;

    cout << borrow << endl;
    return 0;
}

// 1 + 2 + 3 + ... + w এর যোগফল কত?
//  এইটা হচ্ছে একটি Arithmetic Series (ধারাবাহিক সংখ্যা ১ করে বাড়ছে)
//  এটার সরাসরি যোগফল বের করার ফর্মুলা:

// Sum = n × (n + 1) / 2

// 🔹 এখানে n = w, মানে যত কলা কিনবে।
// 🎯 উদাহরণ:

// ধরো, w = 4
// Sum = w × (w + 1) / 2
//     = 4 × (4 + 1) / 2
//     = 4 × 5 / 2 = 10