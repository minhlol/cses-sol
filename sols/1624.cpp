#include <bits/stdc++.h>
using namespace std;
using i64 = int64_t;
// variables below this line
vector<string> board(8);
bool col[8], diag1[15], diag2[15];
int ways = 0;
//----------------------------------------

// smol function below this line

//----------------------------------------

// soltion void if needed
void dfs(int row)
{
    if (row == 8)
    {
        ways++;
        return;
    }

    for (int c = 0; c < 8; c++)
    {
        if (board[row][c] == '*')
            continue;
        if (col[c] or diag1[row + c] or diag2[row - c + 7])
            continue;

        col[c] = true;
        diag1[row + c] = true;
        diag2[row - c + 7] = true;

        dfs(row + 1);

        col[c] = false;
        diag1[row + c] = false;
        diag2[row - c + 7] = false;
    }
}
//----------------------------------------

// main function
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // code below this line
    for (int i = 0; i < 8; i++)
        cin >> board[i];
    dfs(0);
    cout << ways << "\n";
    //----------------------------------------
}