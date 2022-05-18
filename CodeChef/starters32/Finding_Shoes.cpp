#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, m;
    cin >> n >> m;

    int current_right = 0, current_left = m;
    int req_right = n, req_left = n;

    int ans_right = 0, ans_left = 0;

    if (current_left >= req_left)
    {
        ans_left = 0;
    }
    else
    {
        ans_left = abs(req_left - current_left);
    }

    if (current_right >= req_right)
    {
        ans_right = 0;
    }
    else
    {
        ans_right = abs(req_right - current_right);
    }

    cout << (ans_left + ans_right) << endl;
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