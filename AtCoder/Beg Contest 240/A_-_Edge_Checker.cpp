#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int a, b;
    cin >> a >> b;

    map<int, set<int>> mp;

    mp[1] = {2, 10};
    mp[2] = {1,3};
    mp[3] = {2, 4};
    mp[4] = {3,5};
    mp[5] = {4,6};
    mp[6] = {5,7};
    mp[7] = {6,8};
    mp[8] = {7,9};
    mp[9] = {8,10};
    mp[10] = {1,9};

    if(mp[a].count(b)) cout<<"Yes"<<endl;

    else cout<<"No"<<endl;
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