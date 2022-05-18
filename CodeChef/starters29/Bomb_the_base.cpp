#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, x;
    cin >> n >> x;

    int arr[n];

    int max_idx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] < x)
        {
            max_idx = max(max_idx, i);
        }
    }

    cout << max_idx + 1 << endl;
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