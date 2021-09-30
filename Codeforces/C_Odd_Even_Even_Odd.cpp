#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{
    string n;
    cin >> n;
    int i = 0;
    int sumo = 0, sume = 0;
    while (i < n.size())
    {
        if (i % 2 == 0)
        {
            sumo += n[i] - '0';
        }
        else
        {
            sume += n[i] - '0';
        }
        i++;
    }

    if (sumo % 2 == 0 && sume % 2 != 0)
    {
        cout << "good" << endl;
    }
    else
        cout << "not good" << endl;
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