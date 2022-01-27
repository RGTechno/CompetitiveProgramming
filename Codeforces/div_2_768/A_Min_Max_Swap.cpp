#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve()
{
    int n;
    cin >> n;

    int arr1[n];
    int arr2[n];

    int ans = 0;

    int max1 = 0;
    int max2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        if (arr1[i] > max1)
        {
            max1 = arr1[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
        if (arr2[i] > max2)
        {
            max2 = arr2[i];
        }
    }

    // operation on arr2
    if (max1 > max2)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr2[i] > arr1[i])
            {
                swap(arr2[i], arr1[i]);
            }
        }
        int max2 = 0;

        for (int i = 0; i < n; i++)
        {
            max2 = max(max2, arr2[i]);
        }

        ans = (max1 * max2);
    }

    // operation on arr1
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > arr2[i])
            {
                swap(arr1[i], arr2[i]);
            }
        }
        int max1 = 0;

        for (int i = 0; i < n; i++)
        {
            max1 = max(max1, arr1[i]);
        }

        ans = (max1 * max2);
    }

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