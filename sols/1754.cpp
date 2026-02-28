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
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << ((a + b) % 3 == 0 && (a <= b * 2 && b <= a * 2) ? "YES" : "NO") << "\n";
    }
    //----------------------------------------
}