#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    return a;
}

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    set<int> st;

    int total = (n * (n + 1)) / 2;

    int gcdAB = gcd(a, b);

    int lcm = (a * b) / gcdAB;

    int i = lcm;
    while (i <= n)
    {
        if (i % lcm == 0)
        {
            if (st.count(i) == 0)
            {
                total -= i;
            }
        }
        i += lcm;
    }

    i = a;
    while (i <= n)
    {
        if (i % a == 0)
        {
            if (st.count(i) == 0)
            {
                total -= i;
            }
        }
        i += a;
    }

    i = b;
    while (i <= n)
    {
        if (i % b == 0)
        {
            if (st.count(i) == 0)
            {
                total -= i;
            }
        }
        i += b;
    }

    cout << total << endl;
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