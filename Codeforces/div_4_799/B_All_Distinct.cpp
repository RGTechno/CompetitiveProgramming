#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int sz = mp.size();

    while (n)
    {
        if (n > sz)
        {
            n -= 2;
        }
        else
            break;
    }

    cout << n << endl;
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