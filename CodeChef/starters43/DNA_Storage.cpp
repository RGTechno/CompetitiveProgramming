#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;

    for (int i = 0; i < n;)
    {
        string tmp = s.substr(i, 2);
        if (tmp == "00")
        {
            ans.push_back('A');
        }
        else if (tmp == "01")
        {
            ans.push_back('T');
        }
        else if (tmp == "10")
        {
            ans.push_back('C');
        }
        else if (tmp == "11")
        {
            ans.push_back('G');
        }
        i += 2;
    }

    cout << ans << endl;
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