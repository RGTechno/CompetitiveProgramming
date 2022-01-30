#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int search(vector<int> &v, int k)
{
    int n = v.size();

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == k)
            ans = i;
    }

    return ans;
}

void shiftL(vector<int> &v, int from)
{
    int n = v.size();

    for (int i = n-1; i >=from; i--)
    {
        v[i] = v[i-1];
    }
}

void shiftR(vector<int> &v, int from)
{
    int n = v.size();

    for (int i = from + 1; i < n - 1; i++)
    {
        v[i + 1] = v[i];
    }
}

void left(vector<int> &v, int ele, int ref)
{

    int refIdx = search(v, ref);

    shiftL(v, refIdx);
    v[refIdx] = ele;
}

void right(vector<int> &v, int ele, int ref)
{

    int refIdx = search(v, ref);

    shiftR(v, refIdx);
    v[refIdx + 1] = ele;
}

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> arr(n + 1,0);

    // arr[0] = 0;

    for (int i = 1; i < n + 1; i++)
    {
        if (s[i - 1] == 'L')
        {
            left(arr, i, i - 1);
        }
        else
        {
            right(arr, i, i - 1);
        }
    }

    for (auto i : arr)
        cout << i << " ";
    cout << endl;
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