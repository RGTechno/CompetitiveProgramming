#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    double f = ((a * (60 * 60)) + (b * 60));
    double s = ((c * (60 * 60)) + (d * 60) + 1);

    if (f < s)
    {
        cout << "Takahashi" << endl;
        return;
    }

    cout << "Aoki" << endl;
    return;
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