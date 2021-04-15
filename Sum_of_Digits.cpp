#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{
    int n;
    int sum = 0;
    cin >> n;
    while (n > 0)
    {
        int k = n % 10;
        sum = sum + k;
        n = n / 10;
    }
    cout << sum << endl;
}

int main()
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