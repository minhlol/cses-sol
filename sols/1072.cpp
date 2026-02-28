#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
// variables below this line

//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed
void solution()
{
}
//----------------------------------------

// main function
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // code below this line
    int64_t n;
    cin >> n;
    for (int64_t i = 1; i <= n; i++)
    {
        cout << (i * i * i * i - 9 * i * i + 24 * i - 16) / 2 << "\n";
    }
    //----------------------------------------
}