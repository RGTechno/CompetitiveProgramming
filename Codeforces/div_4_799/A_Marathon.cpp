#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int count = 0;

    if (b > a)
        count++;
    if (c > a)
        count++;
    if (d > a)
        count++;

    cout << count << endl;
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