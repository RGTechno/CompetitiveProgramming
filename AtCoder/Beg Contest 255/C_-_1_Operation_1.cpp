#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool isgood(int m, int a, int d)
{

    int tmp1 = (m - a + d) / d;
    double tmp2 = (m - a + d) * (1.0) / d; // n

    return tmp1 == tmp2;
}

int term(int a, int d, int n)
{
    return a + (n - 1) * d;
}

void solve()
{
    int x, a, d, n;
    cin >> x >> a >> d >> n;

    int first = a, second = term(a, d, n);

    if ((x >= first and x <= second) or (x <= first and x >= second))
    {
        int l = 1, r = n + 1;
        while (r - l > 1)
        {
            int m = l + (r - l) / 2;
            int val = term(a, d, m);
            if (val <= x)
                if (d < 0)
                    r = m;
                else
                    l = m;
            else if (d < 0)
                l = m;
            else
                r = m;
        }

        int rth = term(a, d, r);
        int lth = term(a, d, l);

        // cout << lth << " " << rth << endl;

        int ans = min((x - lth), (rth - x));

        cout << ans << endl;
    }

    else
    {
        int ans = min(abs(x - first), abs(second - x));
        cout << ans << endl;
    }
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