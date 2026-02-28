#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
const int MOD = 1e9 + 7;
// variables below this line

//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed
int64_t ans(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    if (n % 2 == 0)
        return ((ans(n / 2) % MOD) * (ans(n / 2) % MOD)) % MOD;
    else
        return ((ans(n - 1) % MOD) * 2) % MOD;
}
//----------------------------------------

// main function
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // code below this line
    int n;
    cin >> n;
    cout << ans(n);
    //----------------------------------------
}