#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int n;
    cin>>n;

    int ans = n;

    int k = n%10;

    int m = n/10;

    ans+=(100*k)+m;

    int s = m%10;

    int r = m/10;

    int f = (100*s)+(10*k)+r;

    ans+=f;
    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}