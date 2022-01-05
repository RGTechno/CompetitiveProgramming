#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int solve()
{
    int a, b;
    cin >> a >> b;
    int ans=0;

    if (a >= b)
        return 0;

    while(a<b){
        a+=10;
        ans++;
    }

    return ans;
    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}