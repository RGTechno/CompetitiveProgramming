#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

string solve()
{
    int n, m;

    cin >> n >> m;

    int a[n], b[m];

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];

        if (mp[b[i]] == 0 or !mp.count(b[i]))
        {
            return "No";
        }

        mp[b[i]]--;
    }
    return "Yes";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}