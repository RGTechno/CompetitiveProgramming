#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    string a, b;
    cin >> a;
    cin >> b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    // cout << a << endl
    //      << b << endl;

    int s = 0, e = n - 1;

    string ans;

    while (s <= e)
    {
        ans.push_back(a[s]);
        ans.push_back(b[s]);

        s++;
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