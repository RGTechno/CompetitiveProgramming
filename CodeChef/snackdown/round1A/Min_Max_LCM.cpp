#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int x, k;

    cin >> x >> k;

    int m = x * k;

    int minLCM = INT64_MAX;
    int maxLCM = 0;

    minLCM = min(minLCM,2*x);

    maxLCM = max(maxLCM,m*(m-1));

    cout << minLCM << " " << maxLCM << endl;
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