#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int bin_less(vector<int> &v, int x)
{

    int l = -1, r = v.size();
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        if (v[m] > x)
        {
            r = m;
        }
        else
            l = m;
    }

    return l;
}

void solve2(priority_queue<int, vector<int>, greater<int>> pq, int x, int k)
{
    vector<int> v;

    while (!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }

    // v is sorted => binary search
    int idx = bin_less(v, x);

    idx = idx - k + 1;

    if (idx < 0)
        cout << "-1" << endl;
    else
        cout << v[idx] << endl;
}

int bin_greater(vector<int> &v, int x)
{

    int l = -1, r = v.size();
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        if (v[m] >= x)
        {
            r = m;
        }
        else
            l = m;
    }

    return r;
}

void solve3(priority_queue<int, vector<int>, greater<int>> pq, int x, int k)
{
    vector<int> v;

    while (!pq.empty())
    {
        v.push_back(pq.top());
        // cout << pq.top() << " ";
        pq.pop();
    }

    // v is sorted => binary search
    int idx = bin_greater(v, x);

    idx = idx + (k - 1);
    if (idx >= v.size())
        cout << "-1" << endl;
    else
        cout << v[idx] << endl;
}

void solve()
{
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<int>> pq;

    while (q--)
    {
        int qi, x, k = 0;

        cin >> qi >> x;

        if (qi == 2 or qi == 3)
        {
            cin >> k;
        }

        if (qi == 1)
        {
            // solve 1
            pq.push(x);
        }
        else if (qi == 2)
        {
            // solve 2
            // elements less than equal to x => print kth largest element
            // if k > size() => print -1

            solve2(pq, x, k);
        }
        else if (qi == 3)
        {
            // solve 3
            // elements greater than equal to x => print kth smallest element
            // if k > size() => print -1

            solve3(pq, x, k);
        }

        // cout << qi << " " << x << " " << k << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}