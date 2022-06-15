#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int gcd(int a, int b)
{
    if (b != 0)
    {
        return gcd(b, a % b);
    }
    else
        return a;
}

int g(int a, int b)
{
    int GCD = gcd(a, b);
    int LCM = (a * b) / GCD;

    return GCD + LCM;
}

void solve()
{
    int n;
    cin >> n;

    int s = 1, e = n - 1;

    vector<int> v;

    map<int, int> mp;

    int fn = INT_MAX;
    while (s <= e)
    {
        // s+e=n;
        int x1, x2;
        if (s == e)
        {
            x1 = g(s, e);
            fn = min(fn, x1);
            v.push_back(x1);
            mp[x1]++;
        }
        else
        {
            x1 = g(s, e);
            x2 = g(e, s);
            fn = min(fn, min(x1, x2));
            v.push_back(x1);
            v.push_back(x2);
            mp[x1]++;
            mp[x2]++;
        }
        s++;
        e--;
    }

    int ans = mp[fn];
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