#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, x;
    cin >> n >> x;

    int a[n];
    int pref[n];

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==1){
            pref[i]=i;
        }
        totalSum += a[i];
    }

    if (totalSum == x)
    {
        cout << "0" << endl;
        return;
    }
    else if (totalSum < x)
    {
        cout << "-1" << endl;
        return;
    }

    // sum>x

    int s = 0, e = n - 1;
    int count = 0;
    while (s <= e)
    {
        if (totalSum == x)
            break;
        if (a[s] > a[e])
        {
            // s=1      // e=0
            totalSum -= 1;
            count++;
            s++;
        }
        else if (a[e] > a[s])
        {
            // s=0      // e=1
            totalSum -= 1;
            count++;
            e--;
        }
        else if (a[s] == 1 and a[e] == 1)
        {
            totalSum -= 1;
            count++;
            s++;
        }
        else
        {
            // both 0;
            s++;
            count++;
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