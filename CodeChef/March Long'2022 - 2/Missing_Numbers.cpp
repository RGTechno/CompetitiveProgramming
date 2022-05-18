#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool comp(int a, int b)
{
    return a > b;
}

bool check(map<int, int> mp, int a, int b)
{
    if (mp.count(a + b))
    {
        if (mp[(a + b)] == 0)
            return false;
        else
        {
            mp[(a + b)]--;
        }
    }
    else
        return false;

    if (mp.count(a * b))
    {
        if (mp[(a * b)] == 0)
            return false;
        else
        {
            mp[(a * b)]--;
        }
    }
    else
        return false;

    if (mp.count(a - b))
    {
        if (mp[(a - b)] == 0)
            return false;
        else
        {
            mp[(a - b)]--;
        }
    }
    else
        return false;

    if (mp.count(a / b))
    {
        if (mp[(a / b)] == 0)
            return false;
        else
        {
            mp[(a / b)]--;
        }
    }
    else
        return false;

    return true;
}

void solve()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    map<int, int> mp;

    mp[A]++;
    mp[B]++;
    mp[C]++;
    mp[D]++;

    vector<int> v(4);
    v[0] = A;
    v[1] = B;
    v[2] = C;
    v[3] = D;

    sort(v.begin(), v.end(), comp);
    // v[0] = a.b and v[1] = a+b;

    if (v[3] < 0)
    {
        // a-b is last a<=b
        int add = v[1];
        int sub = v[3];

        if ((add + sub) % 2 != 0)
        {
            cout << "-1 -1" << endl;
            return;
        }

        int a = (add + sub) / 2;
        int b = (add - a);

        cout << a << " " << b << endl;
        return;
    }
    else if (v[3] >= 0)
    {
        // a-b is 3rd a>b
        int add = v[1];
        int sub = v[2];

        if ((add + sub) % 2 != 0)
        {
            cout << "-1 -1" << endl;
            return;
        }

        int a = (add + sub) / 2;
        int b = (add - a);

        cout << a << " " << b << endl;
        return;
    }

    // for (auto &i : v)
    //     cout << i << " ";
    // cout << endl;
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