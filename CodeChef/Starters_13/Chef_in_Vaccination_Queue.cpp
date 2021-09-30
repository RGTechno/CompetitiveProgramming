#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{

    int n, p, x, y;
    cin >> n >> p >> x >> y;

    int a[n];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < p; i++)
    {
        if (a[i] == 0)
        {
            ans += x;
        }
        else
            ans += y;
    }

    cout << ans << endl;
}

int main()
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