#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year)
{
    set<int> digits;
    while (year > 0)
    {
        int digit = year % 10;       // year % 10 দিয়ে আমরা বছরের শেষ ডিজিট বের করছি। উদাহরণ: যদি year = 2013 হয়, 2013 % 10 = 3।
        if (digits.count(digit) > 0) // এখানে আমরা চেক করছি এই digit আগেই set এ আছে কি না। digits.count(digit) যদি ১ বা তার বেশি হয়, মানে digit আগে এসেছে → রিপিট হয়েছে। তাই এই ক্ষেত্রে ফাংশন false রিটার্ন করে শেষ হয়ে যাবে।
            return false;
        digits.insert(digit); // যদি আগেই না থাকে, তাহলে নতুন digit কে set এ যোগ করি।
        year /= 10;           // year /= 10 মানে year = year / 10 এটা দিয়ে আমরা বছরের শেষ ডিজিট কেটে ফেলি। উদাহরণ: 2013 থেকে 201 => পরের লুপে 201 এর ডিজিটগুলো চেক হবে।
    }
    return true;
}

int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y++; // প্রতি লুপে y এক বার বাড়াচ্ছি, যাতে আমরা পরের বছর চেক করতে পারি।
        if (hasDistinctDigits(y))
        {
            cout << y << endl;
            break;
        }
    }
    return 0;
}
