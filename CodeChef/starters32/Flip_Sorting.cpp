#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int pref_o[n], pref_z[n];

    int count_o = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            count_o++;
        }
        pref_o[i] = count_o;
    }

    int count_z = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            count_z++;
        }
        pref_z[i] = count_z;
    }

    int s = 0, e = n - 1;

    while (s <= e)
    {
        int m = s;
        if (str[s] == '0')
        {
            s++;
            m++;
        }
        else
        {
            while (str[m] != '0')
            {
                m++;
            }
            if((pref_z[n-1]-pref_z[m])!=0){
                // more zeroes ahead
                
            }
        }
    }
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