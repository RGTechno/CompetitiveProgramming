#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, w;
    cin >> n >> w;

    vector<int> v(n);

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    // one

    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > w)
            break;
        if (v[i] <= w)
            st.insert(v[i]);
    }

    // two
    int count2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (v[i] + v[j] <= w)
                st.insert(v[i] + v[j]);
        }
    }

    // three
    int count3 = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if ((v[i] + v[j] + v[k]) <= w)
                    st.insert(v[i] + v[j] + v[k]);
            }
        }
    }

    int ans = st.size();

    cout << ans << endl;
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