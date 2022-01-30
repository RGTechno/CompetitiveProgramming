#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void arrRotate(int v[], int pos, int n)
{
    int i = pos, j = n - 1;

    swap(v[i], v[j]);
}

void solve()
{
    int n, k;

    cin >> n >> k;

    // cout<<n<<" "<<k<<endl;

    if (n == k)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;

        return;
    }

    int ans[n] = {0};

    if (n > 1 and k == 1)
        cout << "-1" << endl;

    else
    {
        if (k == 2)
        {
            ans[0] = 1;
            for (int i = 1; i < n; i++)
            {
                ans[i] = i + 1;
            }

            arrRotate(ans, 1, n);

            for (auto i : ans)
                cout << i << " ";
            cout << endl;
        }

        else
        {

            for (int i = 0; i < n; i++)
            {
                ans[i] = i + 1;
            }

            for (int i = 0; i < k-1; i++)
            {
                arrRotate(ans, i, n);
            }

            for (auto i : ans)
                cout << i << " ";
            cout << endl;
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