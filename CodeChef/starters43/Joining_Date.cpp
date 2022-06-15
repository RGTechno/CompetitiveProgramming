#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;

    int mx = INT_MIN;

    int a[n + 1];
    a[0] = 0;
    int j = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 1)
            j++;

        a[i] = j;
        mx = max(mx, a[i]);
    }

    int ele = a[k];
    cout << (mx - ele) << endl;
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