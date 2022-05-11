#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int na,nb,nc;
    cin>>na>>nb>>nc;

    if((nc>(na+nb)) or (na>(nb+nc)) or (nb>(nc+na))){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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