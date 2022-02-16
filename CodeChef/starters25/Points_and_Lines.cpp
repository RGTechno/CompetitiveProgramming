#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{

    int n;
    cin >> n;

    set<int> y;
    set<int> x;

    for (int i = 0; i < n; i++)
    {
        int xi, yi;
        cin >> xi >> yi;

        x.insert(xi);
        y.insert(yi);
    }

    int ans = x.size() + y.size();

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