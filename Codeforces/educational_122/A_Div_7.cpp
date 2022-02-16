#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(int n, int i)
{
    if (n % 7 == 0)
        return n;

    string x = to_string(n);
    x[0] = i+'0';

    // cout<<x<<endl;

    int ans = solve(stoll(x), i + 1);

    return ans;
}

int solve()
{

    int n;
    cin >> n;

    string temp = to_string(n);

    // int i = temp[0] - '0';

    int ans = solve(n, 1);

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}