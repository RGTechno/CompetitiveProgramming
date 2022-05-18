#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, k;

    cin >> n >> k;

    int arr[n];

    for (auto &i : arr)
    {
        cin >> i;
    }

    int x = 0;

    while (k--)
    {
        x += (arr[x % n]);
    }

    cout << x << endl;
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