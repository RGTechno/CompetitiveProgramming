#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool good(int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (!(((arr[i + 2] == arr[i + 1] + 1) and (arr[i + 1] == arr[i] + 1)) or ((arr[i] == arr[i + 1] + 1) and (arr[i + 1] == arr[i + 2] + 1))))
        {
            return false;
        }
    }

    return true;
}

int solve(int arr[], int n)
{

    if (good(arr, n - 1))
    {
        
    }
}

int solve()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int a[] = {1,2,3,4,5,6};

    // cout<<good(a,n)<<endl;

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
        cout << solve() << endl;
    }
    return 0;
}