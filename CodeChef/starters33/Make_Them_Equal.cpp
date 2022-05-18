#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> o, e;

    for (auto &i : arr)
    {
        if (i & 1)
            o.push_back(i);

        else
            e.push_back(i);
    }

    int ans;

    int osize = o.size();
    int esize = e.size();
    if (osize & 1)
    {
        ans = esize;
    }
    else
    {
        ans = min((osize / 2), esize);
    }

    cout << ans << endl;
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