#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    map<int, int> mpx, mpy;

    for (int i = 0; i < 3; i++)
    {
        int x, y;
        cin >> x >> y;

        mpx[x]++;
        mpy[y]++;
    }

    int ans_x, ans_y;

    for (auto &i : mpx)
    {
        if (i.second == 1)
        {
            ans_x = i.first;
        }
    }

    for (auto &i : mpy)
    {
        if (i.second == 1)
        {
            ans_y = i.first;
        }
    }

    cout << ans_x << " " << ans_y << endl;
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