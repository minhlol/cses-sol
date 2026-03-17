#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
// variables below this line

//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed
void tower(int n, int source, int destination, int helper)
{
    if (n == 1)
    {
        cout << source << " " << destination << "\n";
        return;
    }

    tower(n - 1, source, helper, destination);

    cout << source << " " << destination << "\n";

    tower(n - 1, helper, destination, source);
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
    cout << pow(2, n) - 1 << "\n";
    tower(n, 1, 3, 2);
    //----------------------------------------
}