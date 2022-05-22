#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool isPalin(string &s)
{
    string t = s;
    reverse(t.begin(), t.end());

    return s == t;
}

void solve(string s, int n, int &ans)
{

    if (n == 0)
    {
        ans += 1;
        return;
    }

    if (isPalin(s))
    {
        // cout << s << endl;
        ans += 1;
    }

    for (int i = 0; i < n; i++)
    {
        string l = s.substr(0, i);
        string r = s.substr(i + 1, n - i - 1);

        string tmp = l + r;

        solve(tmp, n - 1, ans);
    }
}

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);

    else
        return a;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int total = 0;
    solve(s, n, total);

    int ways = factorial(n);

    int x = gcd(total, ways);
    total /= x;
    ways /= x;

    int rhs = total % mod;
    int jeez = mod + total;

    int e = (jeez / ways) % mod;

    cout << e << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    int i = 1;
    while (i <= t)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
    return 0;
}
