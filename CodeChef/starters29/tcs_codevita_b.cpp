#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        v.push_back({x, y});
    }

    // max sides = size of v;

    // eliminate points on same line

    // each x,y coordinate will occur max 2 time

    set<pair<int, int>> st_x;
    set<pair<int, int>> st_y;

    for (int i = 0; i < n - 1;)
    {
        pair<int, int> p1 = v[i];
        st_x.insert(p1);
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (v[j].first != p1.first)
            {
                st_x.insert(v[j - 1]);
                break;
            }
        }
        if (j == n)
        {
            st_x.insert(v[j - 1]);
        }
        i = j;
    }

    for (int i = 0; i < n - 1;)
    {
        pair<int, int> p1 = v[i];
        st_y.insert(p1);
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (v[j].second != p1.second)
            {
                st_y.insert(v[j - 1]);
                break;
            }
        }
        if (j == n)
        {
            st_y.insert(v[j - 1]);
        }
        i = j;
    }

    cout << max(st_x.size(), st_y.size());
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