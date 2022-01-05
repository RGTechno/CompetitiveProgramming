#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int x,y,z;
    cin>>x>>y>>z;

    if((x+y)>z) cout<<"TRAIN"<<endl;
    else if((x+y)<z) cout<<"PLANEBUS"<<endl;
    else cout<<"EQUAL"<<endl;
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