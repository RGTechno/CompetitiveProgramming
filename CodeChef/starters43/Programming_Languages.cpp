#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b, a1, a2, b1, b2;
    cin >> a >> b >> a1 >> b1 >> a2 >> b2;

    if ((a1 == a and b1 == b) or (a1 == b and b1 == a))
    {
        cout << "1" << endl;
        return;
    }

    if ((a2 == a and b2 == b) or (a2 == b and b2 == a))
    {
        cout << "2" << endl;
        return;
    }

    else
        cout << "0" << endl;
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