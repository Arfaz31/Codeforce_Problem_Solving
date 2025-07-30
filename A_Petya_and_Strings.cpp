#include <iostream>
#include <string>
#include <cctype> // for tolower

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    // Convert both strings to lowercase
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    // Lexicographical comparison
    if (a < b)
    {
        cout << -1 << endl;
    }
    else if (a > b)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
