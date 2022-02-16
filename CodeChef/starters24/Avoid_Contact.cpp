#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int x,y;

    cin>>x>>y;

    int nC = x-y;

    int rC = y*2;

    int total = rC+nC;

    if(x==y) total-=1;

    cout<<total<<endl;


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