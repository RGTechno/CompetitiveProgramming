#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int prev = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (prev == 0)
        {
            if ((abs(a[i] - a[i + 1]) > k) and (abs(a[i] - b[i + 1]) > k))
            {
                if ((abs(b[i] - a[i + 1]) > k) and (abs(b[i] - b[i + 1]) > k))
                {
                    // cout << "ab2" << endl;
                    cout << "No" << endl;
                    return;
                }
                else
                {
                    prev = b[i];
                    continue;
                }
            }
            else
            {
                prev = a[i];
                continue;
            }
        }
        else
        {
            if (((abs(a[i] - a[i + 1]) > k) or (abs(prev - a[i]) > k)) and ((abs(a[i] - b[i + 1]) > k)) or (abs(prev - a[i]) > k))
            {
                if ((((abs(b[i] - a[i + 1]) > k) or (abs(prev - b[i]) > k))) and (((abs(b[i] - b[i + 1]) > k) or (abs(prev - b[i]) > k))))
                {
                    // cout << "ab4 " << i << endl;

                    // cout << "prev " << prev << endl;

                    cout << "No" << endl;
                    return;
                }
                else
                {
                    prev = b[i];
                    continue;
                }
            }
            else
            {
                prev = a[i];
                continue;
            }
        }
    }

    cout << "Yes" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}