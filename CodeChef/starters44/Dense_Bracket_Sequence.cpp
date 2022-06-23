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

    int l = 0, r = n - 1;
    int count = 0;

    // l => (
    // r => )
    while (l <= r)
    {
        if (s[l] == '(' and s[r] == ')')
        {
            l++;
            r--;
        }
        else if (s[l] == '(' and s[r] == '(')
        {
            count++;
            l++;
            r--;
        }
        else if (s[l] == ')' and s[r] == ')')
        {
            count++;
            l++;
            r--;
        }
        else if (s[l] == ')' and s[r] == '(')
        {
            count += 2;
            r--;
            l++;
        }
    }

    cout << count << endl;
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