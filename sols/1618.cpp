#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
const int MOD = 1e9 + 7;
// variables below this line

//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed
i64 count_factor_in_factorial(i64 n, i64 p)
{
    i64 ans = 0, m = n, power = p;
    while (m / power > 0)
    {
        ans += m / power;
        power *= p;
    }
    return ans;
}
//----------------------------------------

// main function
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // code below this line
    i64 n;
    cin >> n;
    cout << min(count_factor_in_factorial(n, 2LL), count_factor_in_factorial(n, 5LL));
    //----------------------------------------
}