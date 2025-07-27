#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    // Step 1: Initialize the grid with '.'
    char grid[1001][1001]; // assuming max n, m <= 1000
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            grid[i][j] = '.';
        }
    }

    for (int x = 0; x < k; x++)
    {
        int r1, c1, r2, c2;
        char ch;
        cin >> r1 >> c1 >> r2 >> c2 >> ch;

        // Make sure indices are 0-based
        int row_start = min(r1, r2);
        int row_end = max(r1, r2);
        int col_start = min(c1, c2);
        int col_end = max(c1, c2);

        for (int i = row_start - 1; i <= row_end - 1; i++)
        {
            for (int j = col_start - 1; j <= col_end - 1; j++)
            {
                grid[i][j] = ch;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << "\n";
    }

    return 0;
}

// ধরো তোমার কাছে একটা ৩×৩ গ্রিড আছে, ইনডেক্সিং এভাবে:
// Input (1-based)	C++ Array (0-based)
// Row 1, Col 1	grid[0][0]
// Row 1, Col 2	grid[0][1]
// Row 2, Col 1	grid[1][0]
// Row 3, Col 3	grid[2][2]
// কেন -1 করতে হয়?

// কারণ তোমার ইনপুটে প্রথম সারি মানে 1, কিন্তু C++ array এ সেটা প্রথম সারি নয়, সেটা ০ নম্বর সারি।
// তাই r1 - 1 করলে তুমি সঠিক ০-based ইনডেক্স পাবে।
// সংক্ষেপে

//     ১-based index → "আমরা মানুষ যেভাবে গননা করি, ১ থেকে শুরু"

//     ০-based index → "কম্পিউটার ভাষায় array গুলো ০ থেকে শুরু"