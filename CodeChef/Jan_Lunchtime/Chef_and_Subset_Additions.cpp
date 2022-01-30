#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool solve(int q[], int s[], int n,int x,int y)
{
    for (int i = 0; i < n; i++)
    {
        if ((q[i] + x) != s[i] and (q[i] + y) != s[i])
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int n, x, y;

    cin >> n >> x >> y;

    int q[n], s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int ans = solve(q,s,n,x,y);

    if(ans) cout<<"Yes"<<endl;

    else cout<<"No"<<endl;
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