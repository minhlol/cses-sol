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
    vector<vector<string>> gen(n + 1);
    gen[1] = {"0", "1"};
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < gen[i - 1].size(); j++)
            gen[i].push_back("0" + gen[i - 1][j]);

        for (int j = gen[i - 1].size() - 1; j >= 0; j--)
            gen[i].push_back("1" + gen[i - 1][j]);
    }

    for (int i = 0; i < gen[n].size(); i++)
        cout << gen[n][i] << "\n";
    //----------------------------------------
}