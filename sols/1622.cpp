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
    string s;
    vector<string> v;
    int cnt = 0;
    cin >> s;
    sort(s.begin(), s.end());
    do
    {
        cnt++;
        v.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << cnt << "\n";
    for (string x : v)
        cout << x << "\n";

    //----------------------------------------
}