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
    i64 n;
    cin >> n;
    vector<int> a, b;
    if (n * (n + 1) % 4 != 0)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    i64 sum = n * (n + 1) / 4;
    for (int i = n; i > 0; i--)
    {
        if (i <= sum)
        {
            a.push_back(i);
            sum -= i;
        }
        else
            b.push_back(i);
    }
    cout << a.size() << "\n";
    for (int i : a)
        cout << i << " ";
    cout << "\n"
         << b.size() << "\n";
    for (int i : b)
        cout << i << " ";
    //----------------------------------------
}