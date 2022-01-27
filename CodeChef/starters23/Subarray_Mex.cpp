#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

// bool check(vector<int> &v, int subSize, int mex)
// {

//     bool flag = false;

//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = 0; j < subSize; j++)
//         {
//             if (v[j] == mex)
//             {
//                 flag = true;
//                 break;
//             }
//         }
//     }

//     return flag;
// }

void display(vector<int> &v)
{
    for (auto i : v)
    {
        cout << i << " ";
    }
}

void solve()
{
    int n, k, x;

    cin >> n >> k >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = i % x;
    }

    // if(not check(v,k,x)) re

    if (x > k)
        cout << "-1" << endl;

    else
        display(v);

    cout << endl;
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