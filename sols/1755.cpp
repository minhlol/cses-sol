#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
const int MOD = 1e9 + 7;
// variables below this line

//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed

//----------------------------------------

// main function
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // code below this line
    string s;
    cin >> s;
    map<char, int> count;
    for (char c : s)
        count[c]++;

    int oddCount = 0;
    for (auto &[c, cnt] : count)
        if (cnt % 2 != 0)
            oddCount++;
    if (oddCount > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string leftHalf, middle, rightHalf;
    for (auto &[c, cnt] : count)
    {
        if (cnt % 2 != 0)
            middle = string(cnt, c);
        else
        {
            leftHalf += string(cnt / 2, c);
            rightHalf = string(cnt / 2, c) + rightHalf;
        }
    }
    cout << leftHalf << middle << rightHalf << "\n";
    //----------------------------------------
}