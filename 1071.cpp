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
    int t;
    cin >> t;
    while (t--)
    {
        int64_t x, y, n, diag;
        cin >> x >> y;
        n = max(x, y);
        diag = n * n - n + 1;
        if (n % 2 == 0)
        {
            if (x == n)
                cout << diag + (n - y) << "\n";
            else
                cout << diag - (n - x) << "\n";
        }
        else
        {
            if (y == n)
                cout << diag + (n - x) << "\n";
            else
                cout << diag - (n - y) << "\n";
        }
    }
}
