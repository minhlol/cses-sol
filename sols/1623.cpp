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
    int n;
    cin >> n;
    vector<i64> p(n);
    i64 total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        total_sum += p[i];
    }
    i64 min_diff = total_sum;

    for (int mask = 0; mask < (1 << n); mask++)
    {
        i64 sum1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (mask >> i & 1)
                sum1 += p[i];
        }

        i64 diff = abs(total_sum - 2 * sum1);
        min_diff = min(min_diff, diff);
        if (min_diff == 0)
            break;
    }

    cout << min_diff << "\n";

    //----------------------------------------
}
