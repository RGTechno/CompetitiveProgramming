#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{

    int a, b;
    cin >> a >> b;

    long long int x = 0;

    int flag = 0;

    while (x >= b * b)
    {
        x += a;
    }

    if (x != b * b)
        flag = -1;

    while (x >= 1)
    {
        x = x / b;
    }

    if (x != 1)
    {
        flag = -1;
    }

    if(flag!=-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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