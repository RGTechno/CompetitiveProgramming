#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool is_prime(int x)
{
    if (x <= 1)
        return false;

    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

bool solve()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    // T will only win if he chooses a number which combined with remaining can never be prime

    bool flag = 1; // T

    for (int i = a; i <= b; i++)
    {
        flag = 1;
        for (int j = c; j <= d; j++)
        {
            if (is_prime(i + j))
            {
                // cout << (i + j) << endl;
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            return flag;
    }

    return flag;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int ans = solve();

        if (ans)
            cout << "Takahashi" << endl;

        else
            cout << "Aoki" << endl;
    }
    return 0;
}