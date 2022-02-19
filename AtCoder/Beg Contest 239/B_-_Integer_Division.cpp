#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    if (n % 10 == 0)
    {
        cout << n / 10 << endl;
        return;
    }

    if (n < 0)
    {
        n /= 10;
        cout << (n - 1) << endl;

        return;
    }

    n /= 10;
    cout << n << endl;

    return;

    // string s = to_string(n);

    // int size = s.size();

    // s = s.substr(0, size - 1);

    // if (n < 0)
    // {
    //     int x = stoll(s);
    //     cout << x - 1 << endl;
    //     return;
    // }

    // cout << s << endl;
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