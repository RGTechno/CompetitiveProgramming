#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool good(string &s)
{
    int st = 0, e = s.size() - 1;
    while (st <= e)
    {
        if (s[st] == s[e])
            return false;

        st++;
        e--;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }

    sort(s.begin(), s.end());

    reverse(s.begin(), s.begin() + n / 2);

    if (!good(s))
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    cout << s << endl;
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