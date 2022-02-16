#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int k = 2 * n;

    int countOdd = 0;
    int countEven = 0;

    int arr[k];

    for (int i = 0; i < k; i++)
    {
        cin >> arr[i];

        if (abs(arr[i]) & 1)
            countOdd++;

        else
            countEven++;
    }

    if (countOdd & 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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