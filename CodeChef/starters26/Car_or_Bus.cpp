#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int x,y;
    cin>>x>>y;

    // x = bike
    // y = car

    if(x<y) {
        cout<<"BIKE"<<endl;
        return;
    }

    else if(y<x){
        cout<<"CAR"<<endl;
        return;
    }

    cout<<"SAME"<<endl;
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