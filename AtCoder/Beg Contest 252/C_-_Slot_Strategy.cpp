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

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        v.push_back(str);

        // fill(pref, s);
    }

    for (char i = '0'; i <= '9'; i++)
    {
        int prev = -1;
        for (auto &s : v)
        {
            for (int k = 0; k < 10; k++)
            {
                if (s[k] == i)
                {
                    if (prev == k)
                    {
                        pref[i-'0'] += 10;
                    }
                    else
                    {
                        prev = max(prev, k);
                        pref[i-'0'] = max(pref[i-'0'], prev);
                    }
                    break;
                }
            }
        }
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