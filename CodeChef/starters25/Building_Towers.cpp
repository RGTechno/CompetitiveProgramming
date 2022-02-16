#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(int x, int m)
{
    int max_height_possible = 1;

    int h = 0;

    int inv = 1;

    int count = 0;

    while (h <= x)
    {
        if (h == x)
            break;

        h += inv;
        inv = h;
        count++;
    }

    // cout << inv << endl;

    // if (m <= count)
    // {
    //     return m / count;
    // }

    if (m < count)
        return 0;

    else if (m == count)
        return 1;

    return count % m;

    // return inv / x;
}

void solve()
{
    int x, m;

    cin >> x >> m;

    int ans = solve(x, m);

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}