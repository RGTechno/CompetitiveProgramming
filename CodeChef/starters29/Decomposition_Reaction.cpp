#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;

    int arr[n + 1];
    arr[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int queries = (2 * m);

    while (queries--)
    {
        int c0, x;
        cin >> c0 >> x;

        int v[(2 * x) + 1];

        v[0] = 0;

        for (int i = 1; i <= (2 * x); i++)
        {
            cin >> v[i];
        }

        for (int i = 1; i <= (2 * x);)
        {
            arr[v[i + 1]] += (v[i] * arr[c0]) % mod;
            i += 2;
        }
 
        arr[c0] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << endl;
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