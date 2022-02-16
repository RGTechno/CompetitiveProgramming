#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool solve()
{
    int n;
    cin >> n;

    int k = (2 * n);

    map<int, int> mp;

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;

        mp[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        // cout << i << "-" << mp[i] << endl;
        if (!mp.count(i))
        {
            return true;
        }
        else
        {
            if (mp[i] == 1)
            {
                return false;
            }
        }
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int ans = solve();

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}