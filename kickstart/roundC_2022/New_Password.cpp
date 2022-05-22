#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

string solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool num = false, ualpha = false, lalpha = false, spec = false;

    for (auto &i : s)
    {
        if (isdigit(i))
            num = true;
        else if (isupper(i))
            ualpha = true;
        else if (islower(i))
            lalpha = true;
        else if (i == '@' or i == '#' or i == '&' or i == '*')
            spec = true;
    }

    if (!ualpha)
        s.push_back('A');
    if (!lalpha)
        s.push_back('a');
    if (!num)
        s.push_back('1');
    if (!spec)
        s.push_back('@');

    int x = s.size();
    int y = (7 - x);

    for (int i = 0; i < y; i++)
    {
        s.push_back('1');
    }

    return s;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    int i = 1;
    while (i <= t)
    {
        cout << "Case #" << i << ": " << solve() << endl;
        i++;
    }
    return 0;
}