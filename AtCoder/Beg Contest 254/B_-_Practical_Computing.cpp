#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> ans(numRows, vector<int>());

    ans[0] = {1};

    for (int i = 1; i < numRows; i++)
    {
        vector<int> v;
        v.push_back(1);
        int n = ans[i - 1].size();
        for (int j = 0; j < n - 1; j++)
        {
            int sum = ans[i - 1][j] + ans[i - 1][j + 1];
            v.push_back(sum);
        }
        v.push_back(1);
        ans[i] = v;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> v = generate(n);

    for (auto &i : v)
    {
        for (auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}