#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void fill(vector<int> &pref, string s)
{
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        pref[s[i] - '0'] = max(pref[s[i] - '0'], i);
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> pref(10, 0);

    vector<string> v;

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        v.push_back(str);
    }

    for (auto &s : v)
    {
        for (int i = 0; i < 10; i++)
        {
            mp[s[i] - '0'].push_back(i);
        }
    }

    for (auto &i : mp)
    {
        sort(i.second.begin(), i.second.end());
        int mx = i.second[0];
        for (int j = 1; j < n; j++)
        {
            if (i.second[j] == i.second[j - 1])
            {
                mx = max(mx + 10, i.second[j]);
            }
            else
            {
                mx = max(mx, i.second[j]);
            }
        }

        pref[i.first] = mx;
    }

    int mn = INT_MAX;

    for (auto &i : pref)
    {
        // cout << i << " ";
        mn = min(mn, i);
    }
    // cout << endl;

    cout << mn << endl;
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