#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n, x, y;

    cin >> n >> x >> y;

    int busCap = 100, carCap = 4;

    int onlyBus = 0;
    int b = 0;
    while (b < n)
    {
        b += busCap;
        onlyBus++;
    }

    int onlyCar = 0;
    int c = 0;
    while (c < n)
    {
        c += carCap;
        onlyCar++;
    }

    if (onlyBus == 1 or onlyCar == 1)
    {
        cout << min((onlyBus * x), (onlyCar * y)) << endl;
        // cout<<"HELLO";
        return;
    }

    int mn = min((onlyBus * x), (onlyCar * y));

    if (onlyBus > 1)
    {
        // onlyCar obv is greater than 1

        while (--onlyBus)
        {
            int left = (n - (onlyBus * busCap));

            int car_req = 0;

            if (left % carCap == 0)
            {
                car_req = left / carCap;
            }
            else
                car_req = (left / carCap) + 1;

            // cout << "Car Req " << car_req << endl;

            mn = min(mn, (onlyBus * x) + (car_req * y));
        }
    }

    // cout << onlyBus << " " << onlyCar << endl;
    cout << mn << endl;
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