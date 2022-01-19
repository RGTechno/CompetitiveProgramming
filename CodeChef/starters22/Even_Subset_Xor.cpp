#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int count(int n)
{
    int count = 0;

    while (n > 0)
    {

        n = n & (n - 1);
        count++;
    }
    return count;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    if (n == 1)
        v[0] = 3;

    else
    {
        v[0] = 3;

        int j = 4;

        for (int i = 1; i < n;)
        {
            if (!(count(j) & 1))
            {
                v[i] = j;
                j++;
                i++;
            }
            else
                j++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";
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