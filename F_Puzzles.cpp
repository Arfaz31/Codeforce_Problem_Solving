#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> puzzles(m);

    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    int min_diff = INT_MAX;

    for (int i = 0; i <= m - n; i++)
    {
        int diff = puzzles[i + n - 1] - puzzles[i];
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;

    return 0;
}

// sorted puzzles = [5, 7, 10, 10, 12, 22]

// for (int i = 0; i <= m - n; i++) {
//     int diff = puzzles[i + n - 1] - puzzles[i];
//     min_diff = min(min_diff, diff);
// }

// এখানে n = 4, তাই আমরা প্রতিবার 4 টা puzzle টুকরো একসাথে ধরব — অর্থাৎ একটি sliding window হিসাবে।

// i চলবে 0 থেকে m - n = 2 পর্যন্ত। (কারণ এরপর আর ৪টা টুকরো একসাথে নেওয়া যাবে না)

// 🔁 i = 0:

// puzzles[0] to puzzles[3] = [5, 7, 10, 10]
// diff = puzzles[3] - puzzles[0] = 10 - 5 = 5
// min_diff = min(∞, 5) = 5

// 🔁 i = 1:

// puzzles[1] to puzzles[4] = [7, 10, 10, 12]
// diff = puzzles[4] - puzzles[1] = 12 - 7 = 5
// min_diff = min(5, 5) = 5

// 🔁 i = 2:

// puzzles[2] to puzzles[5] = [10, 10, 12, 22]
// diff = puzzles[5] - puzzles[2] = 22 - 10 = 12
// min_diff = min(5, 12) = 5

// তোমাকে n জন student কে puzzle দিতে হবে

// প্রতিটি student exactly 1টা করে puzzle পাবে

// তাই প্রতিবার n টা করে puzzle নিয়ে দেখতেই হবে কোনটা সবচেয়ে ভালো choice (min diff)।

// ধরি:

//     n = 4 (4 জন student)

//     m = 6

//     Puzzle difficulty = [5, 7, 10, 10, 12, 22]

// তাহলে তুমি:

//     প্রথমবার: [5, 7, 10, 10] (4 জনকে 4টা দিলে পার্থক্য: 10 - 5 = 5)

//     পরেরবার: [7, 10, 10, 12] → পার্থক্য: 12 - 7 = 5

//     এরপর: [10, 10, 12, 22] → পার্থক্য: 22 - 10 = 12