#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // পুরো লাইন input নেবে

    set<char> letters; // distinct letters রাখবে

    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
        { // ছোট হাতের letter হলে set এ রাখো
            letters.insert(c);
        }
    }

    cout << letters.size() << endl;
    return 0;
}
