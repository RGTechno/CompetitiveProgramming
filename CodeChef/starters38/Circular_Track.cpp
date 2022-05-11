#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b, m;
    cin >> a >> b >> m;
    int forward, backward;

    if (a > b)
    {
        backward = (a - b);
        forward = ((m-a)+((b)));
    }

    else
    {
        forward = (b - a);
        backward = (m - b) + a;
    }

    cout << min(forward, backward) << endl;
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