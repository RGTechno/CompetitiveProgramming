#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int myPow(int x, int n)
{
    if (n == 0)
        return 1;
    int half = myPow(x, n / 2) % mod;
    int ans = half * half;

    if (n & 1)
    {
        return (x * (ans)) % mod;
    }

    return ans % mod;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    // int arr[n + 1] = {0};
    // arr[1] = x;

    int pw = myPow(2, n - 1);

    int ans = (x * pw) % mod;

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