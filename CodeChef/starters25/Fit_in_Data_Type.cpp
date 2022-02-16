#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{

    int a, b;

    cin >> a >> b;

    if (a >= b)
    {
        cout << b << endl;
    }
    else
    {
        while (b > a)
        {
            b = b - a - 1;
        }

        cout << (b) << endl;
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