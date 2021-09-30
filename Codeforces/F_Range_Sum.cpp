#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{
    int n, q;
    cin >> n >> q;
    long long int a[n];
    for (long long int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        long long int l, r, x;
        cin >> l >> r >> x;
        if (r - l < n - 1)
        {
            for (long long int i = l; i <= r; i++)
            {
                a[i] += x;
            }
        }
        else if(r-l==n-1){
            a
        }
    }

    for (long long int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}