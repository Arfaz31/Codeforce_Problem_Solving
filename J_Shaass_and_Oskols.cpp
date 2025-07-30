#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n; // Number of wires
    vector<int> wires(n);

    for (int i = 0; i < n; i++)
    {
        cin >> wires[i]; // Number of birds on each wire
    }

    int m;
    cin >> m; // Number of shots

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y; // Shot at wire x, y-th bird
        x--;           // Convert to 0-based index

        // Birds to the left wire (x-1) get the y-1 birds
        if (x > 0)
        {
            // wires[x - 1] += y - 1;
            wires[x - 1] = wires[x - 1] + (y - 1);
        }

        // Birds to the right wire (x+1) get the remaining birds
        if (x < n - 1)
        {
            // wires[x + 1] += wires[x] - y;
            wires[x + 1] = wires[x + 1] + (wires[x] - y);
        }

        wires[x] = 0; // Current wire loses all birds due to the shot
    }

    for (int i = 0; i < n; i++)
    {
        cout << wires[i] << endl; // Final number of birds on each wire
    }

    return 0;
}

// n=5
// wires = [10, 10, 10, 10, 10]
// x=2, y=5
// 1️⃣ বাম পাশের তার (index x - 1 → 0):
// cpp
// Copy
// Edit
// wires[0] = wires[0] + (y - 1);
//          = 10 + (5 - 1)
//          = 10 + 4
//          = 14
// 2️⃣ ডান পাশের তার (index x + 1 → 2):
// cpp
// Copy
// Edit
// wires[2] = wires[2] + (wires[1] - y);
//          = 10 + (10 - 5)
//          = 10 + 5
//          = 15
// 3️⃣ গুলি খাওয়া তার (index 1):
// cpp
// Copy
// Edit
// wires[1] = 0;