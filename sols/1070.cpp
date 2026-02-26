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
    int n;
    cin >> n;
    if (n == 2 || n == 3)
        cout << "NO SOLUTION";
    else
    {
        vector<int> odd, even;
        for (int i = 1; i <= n; i++)
        {
            if (i & 1)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        for (int i : even)
            cout << i << " ";
        for (int i : odd)
            cout << i << " ";
    }
}