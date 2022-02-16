#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int count = 0;

    if (n == 2)
    {
        cout << "2 3 4" << endl;
        return;
    }

    int k = n;
    while (k)
    {
        count++;
        k /= 2;
    }

    // cout<<count<<endl;

    int mx = pow(2, count) + n;

    int x = n;

    cout << 0 << " " << x << " " << mx << endl;
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