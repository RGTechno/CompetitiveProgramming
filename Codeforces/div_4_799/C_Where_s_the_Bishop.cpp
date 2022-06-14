#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{

    int n = 8;
    char v[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '#' and v[i - 1][j - 1] == '#' and v[i - 1][j + 1] == '#' and v[i + 1][j - 1] == '#' and v[i + 1][j + 1] == '#')
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }
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