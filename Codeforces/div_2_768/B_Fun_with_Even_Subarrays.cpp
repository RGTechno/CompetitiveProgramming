#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool good(int arr[], int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            return false;
        }
    }

    return true;
}

int solve(int arr[], int n)
{
    if (n == 1)
    {
        return 0;
    }

    if (good(arr, n))
        return 0;

    int ans1, ans2;

    if (arr[n - 1] != arr[n])
    {
        int l = n - 1;
        int k = n - l;
        for (int i = 0; i < k; i++)
        {
            arr[l + i] = arr[l + k + i];
        }

        ans1 = (k - 1) + solve(arr, n - 1);
    }

    else
    {
        ans2 = solve(arr, n - 1);
    }

    return (ans1 + ans2);
}

int solve()
{
    int n;
    cin >> n;

    int arr[n + 1];

    arr[0] = 0;

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = solve(arr, n);
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}