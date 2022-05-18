#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve()
{
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    set<int> st;
    st.insert(x);
    st.insert(y);
    st.insert(a);
    st.insert(b);

    int n = st.size();

    return n - 2;
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