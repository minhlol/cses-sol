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
    int64_t n, ans = 0;
    cin >> n;
    int64_t v[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            ans += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    cout << ans;
    //----------------------------------------
}