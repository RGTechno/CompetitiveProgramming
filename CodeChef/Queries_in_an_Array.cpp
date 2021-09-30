#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int leftMost(int a[], int l, int r, int x)
{

    // cout<<"L="<<l<<endl;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return l;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    a[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        int l, r, x;
        cin >> l >> r >> x;

        int lm = leftMost(a, l, r, x);

        cout << r - lm + 1 << endl;
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
