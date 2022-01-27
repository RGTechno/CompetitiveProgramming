#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    int buy = x*y;

    int sell = x*z;

    cout<<(sell-buy)<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}