#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
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
    int64_t n, sum = 0, x;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        sum += x;
    }
    cout << (n * (n + 1) / 2) - sum << "\n";
}