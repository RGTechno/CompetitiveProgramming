#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int dp[101][100001];

bool solve(vector<pair<int, int>> &v, int n, int x)
{
    if (n == 0)
    {
        if (x == 0)
            return true;

        return false;
    }

    if (x < 0)
        return false;

    if (dp[n][x] != -1)
        return dp[n][x];

    bool ans1 = solve(v, n - 1, x - v[n - 1].first);
    bool ans2 = solve(v, n - 1, x - v[n - 1].second);

    return dp[n][x] = ans1 | ans2;
}

void solve()
{
    int n, x;

    cin >> n >> x;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    bool ans = solve(v, n, x);

    if (ans)
    {
        cout << "Yes" << endl;
    }

    else
        cout << "No" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(dp, -1, sizeof(dp));
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}