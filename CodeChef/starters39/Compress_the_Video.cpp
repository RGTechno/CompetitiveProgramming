#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(vector<int> &v, int &count)
{
    int n = v.size();

    int s = 0;
    int m = s + 1;
    while (m < n)
    {
        if (v[s] == v[m])
            count--;

        s++;
        m++;
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = n;

    solve(v, count);

    cout << count << endl;
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