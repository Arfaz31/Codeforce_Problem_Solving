#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    int bills[] = {100, 20, 10, 5, 1};

    for (int i = 0; i < 5; i++)
    {
        count += n / bills[i]; // এই denomination দিয়ে কয়টা নোট লাগবে
        n %= bills[i];         // বাকিটা অন্য ছোট denomination দিয়ে
    }

    cout << count << endl;
    return 0;
}
