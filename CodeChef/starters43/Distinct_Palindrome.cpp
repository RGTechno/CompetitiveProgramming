#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<char> v(n);

    int s = 0, e = n - 1;
    int distinct = 0;
    char ch = 'a';

    int k = 0;
    while (s <= e and k < x)
    {
        v[s] = v[e] = ch;
        ch++;
        distinct++;
        s++;
        e--;
        k++;
    }

    if (distinct != x)
    {
        cout << "-1" << endl;
        return;
    }

    while (s <= e)
    {
        v[s] = v[e] = (ch - 1);
        s++;
        e--;
    }

    for (auto &i : v)
    {
        cout << i;
    }
    cout << endl;
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