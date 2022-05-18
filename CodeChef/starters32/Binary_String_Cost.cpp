#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    int no_o = 0, no_z = 0;

    for (auto &i : s)
    {
        if (i == '0')
            no_z++;
        else
            no_o++;
    }

    if (no_o == 0 or no_z == 0)
    {
        cout << "0" << endl;
        return;
    }

    if (x > y)
    {
        cout << y << endl;
    }
    else
    {
        cout << x << endl;
    }
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