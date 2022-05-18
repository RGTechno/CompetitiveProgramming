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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    set<int> st;

    for (int i = 0; i < n - 1; i++)
    {
        st.insert(arr[i]);
    }

    int j = n - 1;
    int i = 1;
    while (j)
    {

        if ((arr[j] - i) > 0)
        {
            st.insert(i);
            st.insert(arr[j] - i);
        }

        i++;
        j--;
    }

    // for (auto &i : st)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    cout << st.size() << endl;
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