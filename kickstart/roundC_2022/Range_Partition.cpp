#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

string solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int total = (n) * (n + 1) / 2;

    if(total%(x+y)!=0) return "IMPOSSIBLE";
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