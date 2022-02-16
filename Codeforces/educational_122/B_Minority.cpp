#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve()
{
    string s;
    cin >> s;

    int n = s.size();

    if (n <= 2)
        return 0;

    int countO = 0, countZ = 0;

    for (auto i : s)
    {
        if (i == '0')
            countZ++;
        else
            countO++;
    }

    if (countZ == countO)
    {
        return countO-1;
        string sub = s.substr(1);
        countZ = 0;
        countO = 0;
        for (auto i : s)
        {
            if (i == '0')
                countZ++;
            else
                countO++;
        }

        return min(countZ, countO);
    }

    return min(countO, countZ);

    // vector<int> preO(n, 0);

    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         i == 0 ? preO[i]++ : preO[i] = preO[i] + preO[i - 1] + 1;
    //     }
    //     else
    //     {
    //         i == 0 ? preO[i] = 0 : preO[i] = preO[i - 1];
    //     }
    // }

    // vector<int> preZ(n, 0);

    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == '0')
    //     {
    //         i == 0 ? preZ[i]++ : preZ[i] = preZ[i] + preZ[i - 1] + 1;
    //     }
    //     else
    //     {
    //         i == 0 ? preZ[i] = 0 : preZ[i] = preZ[i - 1];
    //     }
    // }
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