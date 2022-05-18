#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    stack<int> stk;

    vector<int> ans;

    int ele = 0, count = 1;

    for (int i = 0; i < n; i++)
    {
        ele = v[i];

        if (stk.size() == 0)
        {
            stk.push(ele);

            int sz = stk.size();
            ans.push_back(sz);

            continue;
        }

        int t = stk.top();

        if (ele != t)
            count = 1;

        else if (ele == t)
            count++;

        stk.push(ele);

        if (count == ele)
        {
            while (count)
            {
                stk.pop();
                count--;
            }
            count = 1;
        }

        int sz = stk.size();

        ans.push_back(sz);
    }

    for (auto &i : ans)
        cout << i << endl;
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