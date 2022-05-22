#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

vector<int> alan;

void solve(int arr[], int n, vector<int> &a, int total, double &req, int sum = 0)
{

    if ((sum * (1.0)) / (total - sum) == req)
    {
        // cout << "alan = " << sum << " barbara = " << (total - sum) << endl;

        alan = {};

        for (auto &i : a)
            alan.push_back(i);
        return;
    }

    if (n == 0)
        return;

    a.push_back(arr[n - 1]);
    solve(arr, n - 1, a, total, req, sum + arr[n - 1]);
    a.pop_back();
    solve(arr, n - 1, a, total, req, sum);
}

void solve()
{

    int n, x, y;
    cin >> n >> x >> y;

    int total = (n) * (n + 1) / 2;

    if (total % (x + y) != 0)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    double req = x * (1.0) / y;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    vector<int> a;

    solve(arr, n, a, total, req);

    cout << "POSSIBLE\n";

    cout << alan.size() << endl;
    for (auto &i : alan)
        cout << i << " ";
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    int i = 1;
    while (i <= t)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
    return 0;
}