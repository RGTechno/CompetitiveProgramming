#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

vector<int> factors(int n)
{
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    return v;
}

int solve()
{
    int b, c;
    cin >> b >> c;

    vector<int> f = factors(c);

    for (auto &i : f)
    {
        cout << i << endl;
        if ((b * i) % c == 0)
            return i;
    }

    return 0;
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