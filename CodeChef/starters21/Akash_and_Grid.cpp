#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    int cx = (n + 1) / 2;
    int cy = (n + 1) / 2;

    int diffX = x-1;
    int diffY = y-1;

    if((diffX+diffY)&1) return 1;
    return 0;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}