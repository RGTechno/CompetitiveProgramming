#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b, c, p, q, r;
    cin >> a >> b >> c >> p >> q >> r;

    int req_to_win = (p + q + r) / 2;

    req_to_win += 1;

    if ((a + b + c) >= req_to_win)
    {
        cout << "YES" << endl;
    }
    else if (((p + b + c) >= req_to_win) or ((a + q + c) >= req_to_win) or ((a + b + r) >= req_to_win))
    {
        cout << "YES" << endl;
    }

    else
        cout << "NO" << endl;
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