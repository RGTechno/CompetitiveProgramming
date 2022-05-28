#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int h, w; // w is string length
    cin >> h >> w;

    vector<string> v(h);

    for (int i = 0; i < h; i++)
    {
        string s;
        cin >> s;
        v[i] = s;
    }

    // for (int i = 0; i < h; i++)
    // {
    //     for (int j = 0; j < w; j++)
    //     {
    //         cout << v[i][j];
    //     }
    //     cout << endl;
    // }

    int f_x, f_y, s_x, s_y;

    bool first = false;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (v[i][j] == 'o' and !first)
            {
                f_x = i;
                f_y = j;
                first = true;
            }
            else if (v[i][j] == 'o' and first)
            {
                s_x = i;
                s_y = j;
            }
        }
    }

    // cout << f_x << " " << f_y;
    int x_moves = abs(s_x - f_x);
    int y_moves = abs(s_y - f_y);

    int ans = x_moves + y_moves;
    cout << ans << endl;
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