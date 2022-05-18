#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(string &s, int n, set<string> &st)
{

    for (int i = 0; i < n; i++)
    {
        string l = s.substr(0, i);
        string r = s.substr(i + 1, n - i - 1);

        // cout << l << " + " << r << " - ";

        string temp = l + r;

        st.insert(temp);

        // cout << temp << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<string> st;

    solve(s, n, st);

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