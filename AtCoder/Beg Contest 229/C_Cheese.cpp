#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int solve()
{
    int n, w;
    cin >> n >> w;

    priority_queue<int> pq;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int d1, g1;
        cin >> d1 >> g1;

        pq.push(d1);
        mp[d1] = g1;
    }

    int wSum = 0;
    int dSum = 0;
    while (wSum < w and !pq.empty())
    {
        int pDel = pq.top();

        if (mp[pDel] <= (w - wSum))
        {
            dSum += (mp[pDel] * pDel);
            wSum += mp[pDel];
        }
        else
        {
            dSum += ((w - wSum) * pDel);
            wSum += (w - wSum);
        }

        pq.pop();
    }

    return dSum;
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