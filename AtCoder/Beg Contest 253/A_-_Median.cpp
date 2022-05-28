#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v = {a, b, c};

    sort(v.begin(), v.end());

    if (v[1] == b)
        cout << "Yes\n";
    else
        cout << "No\n";
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