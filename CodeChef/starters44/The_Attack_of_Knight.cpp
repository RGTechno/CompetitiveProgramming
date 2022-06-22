#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int x1, y1, x2, y2, n = 8;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    set<pair<int, int>> st1, st2;

    int i1, j1, i2, j2;

    i1 = x1 + 2;
    j1 = y1 + 1;
    i2 = x2 + 2;
    j2 = y2 + 1;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 + 1;
    j1 = y1 + 2;
    i2 = x2 + 1;
    j2 = y2 + 2;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 + 2;
    j1 = y1 - 1;
    i2 = x2 + 2;
    j2 = y2 - 1;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 + 1;
    j1 = y1 - 2;
    i2 = x2 + 1;
    j2 = y2 - 2;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 - 1;
    j1 = y1 - 2;
    i2 = x2 - 1;
    j2 = y2 - 2;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 - 1;
    j1 = y1 + 2;
    i2 = x2 - 1;
    j2= y2 + 2;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 - 2;
    j1 = y1 - 1;
    i2 = x2 - 2;
    j2 = y2 - 1;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    i1 = x1 - 2;
    j1 = y1 + 1;
    i2 = x2 - 2;
    j2 = y2 + 1;
    if ((i1 >= 1 and i1 <= 8) and (j1 >= 1 and j1 <= 8))
    {
        st1.insert({i1, j1});
    }
    if ((i2 >= 1 and i2 <= 8) and (j2 >= 1 and j2 <= 8))
    {
        st2.insert({i2, j2});
    }

    for (auto &i : st1)
    {
        // cout << i.first << "," << i.second << endl;
        if (st2.count(i))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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