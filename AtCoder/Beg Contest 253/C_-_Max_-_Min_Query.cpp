#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{

    int q;
    cin >> q;

    map<int, int> mp;

    for (int i = 0; i < q; i++)
    {
        int type, ele = -1, remove = 0;
        cin >> type;
        if (type == 1)
        {
            cin >> ele;
            mp[ele]++;
        }
        else if (type == 2)
        {
            cin >> ele >> remove;

            int c = min(remove, mp[ele]);
            mp[ele] -= c;

            // if (mp[ele] <= 0)
            // {
            //     mp[ele] = 0;
            // }

            if (mp[ele] <= 0)
            {
                mp.erase(ele);
            }
        }

        else
        {
            // print max-min
            // int mx = INT_MIN, mn = INT_MAX;

            auto mx = mp.end();
            mx--;
            auto mn = mp.begin();
            cout << (mx->first - mn->first) << endl;

            // cout << "map ele\n";

            // for (auto &i : mp)
            // {
            //     cout << i.first << endl;
            //     // if (i.second > 0)
            //     // {
            //     // mx = max(i.first, mx);
            //     // mn = min(i.first, mn);
            //     // }
            // }

            // cout << (mx - mn) << endl;
        }

        // cout << type << " " << ele << " " << remove << endl;
    }
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