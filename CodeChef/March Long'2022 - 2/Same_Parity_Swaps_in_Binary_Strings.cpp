#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool sameParity(int s, int e)
{
    if ((s % 2 == 0 and e % 2 == 0) or (s % 2 != 0 and e % 2 != 0))
        return true;

    return false;
}

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int s = 0, e = n - 1;

    while (s < e)
    {
        if (sameParity(s, e))
        {

            if (str[s] == '1' and str[e] == '0')
            {
                swap(str[s], str[e]);
            }
        }
        e--;
    }
    cout << str << endl;

    cout << "------" << endl;
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