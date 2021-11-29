#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve()
{
    string n;
    int k;

    cin >> n >> k;

    // sort(n.begin(),n.end());
    
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto i : n)
    {
        int t = i - '0';
        pq.push(t);
    }

    while (k > 0)
    {
        int top = pq.top();
        if (top != 9)
        {
            top = top + 1;
            k = k - 1;
        }

        pq.pop();
        pq.push(top);
    }

    int ans = 1;

    while (!pq.empty())
    {
        ans = ans * pq.top();
        pq.pop();
    }
    cout << ans << endl;


    // cout<<n<<endl;
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