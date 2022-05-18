#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    map<string, int> mp;

    priority_queue<pair<int, int>> pq; // score,idx

    int idx = 1;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int score;
        cin >> score;

        if (mp.count(s) == 0)
        {
            // original;
            pq.push({score, idx});
            mp[s] = score;
        }
        idx++;
    }

    auto highest_score = pq.top().first;

    vector<int> v;

    while (!pq.empty())
    {
        auto p = pq.top();
        // cout << p.first << " - " << p.second << endl;
        if (p.first == highest_score)
        {
            v.push_back(p.second);
        }

        pq.pop();
    }

    sort(v.begin(), v.end());

    cout << v[0] << endl;
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