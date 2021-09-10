#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int ans = (a * x) + (b * y);
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}