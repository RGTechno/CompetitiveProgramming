#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int x, y;
    cin >> x >> y;

    int pa = 500, pb = 1000;

    // A->B
    int ans1 = (500 - (x * 2)) + (1000 - ((x + y) * 4));

    // B->A
    int ans2 = (1000 - (y * 4)) + (500 - ((x + y) * 2));

    cout << max(ans1, ans2) << endl;
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