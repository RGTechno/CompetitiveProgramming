#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(int v1[], int v2[], int n, int k, int sum = 0)
{
    if (n == 0 or k == 0)
        return 0;

    int ans1, ans2;

    // ith index chosen
    if (k > 0)
    {
        ans1 = solve(v1, v2, n - 1, k - 1, sum + (v1[n - 1] + v2[n - 1]));
    }

    // ith index not chosen
    else
        ans2 = solve(v1, v2, n - 1, k, sum);

    return max(sum, min(ans1, ans2));
}

int solve()
{
    int n, k;

    cin >> n >> k;

    int v1[n], v2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    return solve(v1, v2, n, k);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}