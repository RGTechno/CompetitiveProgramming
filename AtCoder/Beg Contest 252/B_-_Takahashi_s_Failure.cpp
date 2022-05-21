#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

string solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n), b(k);

    priority_queue<pair<int, int>> pq;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        pq.push({a[i], i+1});
    }

    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }

    set<int> st;
    while (!pq.empty())
    {
        auto t = pq.top();

        pq.pop();

        if (t.first == mx)
        {
            st.insert(t.second);
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (st.count(b[i]))
            return "Yes";
    }

    return "No";
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