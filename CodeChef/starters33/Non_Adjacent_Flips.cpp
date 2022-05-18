#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            v.push_back(i);
        }
    }

    int x = v.size();

    if (x == 0)
    {
        cout << "0" << endl;
        return;
    }

    for (int i = 0; i < x - 1; i++)
    {
        if (v[i + 1] == v[i] + 1)
        {
            cout << "2" << endl;
            return;
        }
    }

    cout << "1" << endl;
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