#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
// variables below this line

//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed
void collatz(int64_t n)
{
    cout << n << " ";
    if (n % 2 == 0)
    {
        if (n / 2 == 1)
        {
            cout << 1 << " ";
            return;
        }
        else
            collatz(n / 2);
    }
    else if (n % 2 == 1 && n != 1)
    {
        collatz(3 * n + 1);
    }
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

    collatz(n);
}
