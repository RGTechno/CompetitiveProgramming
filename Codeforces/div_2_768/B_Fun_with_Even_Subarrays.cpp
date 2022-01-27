#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

// bool good(int arr[], int n)
// {
//     for (int i = 1; i < n + 1; i++)
//     {
//         if (arr[i] != arr[i + 1])
//         {
//             return false;
//         }
//     }

//     return true;
// }

void change(int arr[], int k, int l)
{
    for (int i = 0; i < k; i++)
    {
        arr[l - i] = arr[l + k - i];
    }
}

// 0 4 2 3 3

int solve(int arr[], int n)
{
    int last = arr[n];

    int count = 0;

    for (int i = n - 1; i >= 1; i--)
    {
        if (arr[i] != last)
        {
            int l = i;
            int k = (n - i);
            change(arr, k, l);
            count++;
            i = l - k;
        }
    }

    return count;
}

int solve()
{
    int n;
    cin >> n;

    int arr[n + 1];

    arr[0] = 0;

    for (int i = 1; i < n+1; i++)
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
        cout << solve() << endl;
    }
    return 0;
}