#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool solve()
{
    int n, k;
    cin >> n >> k;

    map<int, set<int>> mp1, mp2;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp1[v[i]].insert(i);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        mp2[v[i]].insert(i);
    }

    int x = (n - k - 1);

    for (auto &i : mp1)
    {
        int ele = i.first;
        auto st = i.second;
        // i.second is the set of occurences in unsorted array
        for (auto &j : st)
        {
            int sum = j;
            bool flag = false;
            if (j <= x)
            {
                while (sum < n)
                {
                    if (mp2[ele].count(sum))
                    {
                        flag = true;
                        break;
                    }
                    sum += k;
                }
            }
            else
            {
                while (sum >= 0)
                {
                    if (mp2[ele].count(sum))
                    {
                        flag = true;
                        break;
                    }
                    sum -= k;
                }
            }
            if (flag == false)
                return false;
        }
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        bool ans = solve();
        ans ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}