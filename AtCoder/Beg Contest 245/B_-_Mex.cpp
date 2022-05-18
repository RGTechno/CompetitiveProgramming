#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int arr[n];

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        st.insert(arr[i]);
    }

    for (int i = 0; i <= 2000; i++)
    {
        if (!st.count(i))
        {
            cout << i << endl;
            return;
        }
    }

    // sort(arr, arr + n);
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