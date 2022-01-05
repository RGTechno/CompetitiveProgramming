#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int z,y,a,b,c;
    cin>>z>>y>>a>>b>>c;

    int rem = z-y;

    int TC = a+b+c;

    if(rem>=TC){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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