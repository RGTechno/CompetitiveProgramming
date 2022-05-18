#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int n,m;
    cin>>n>>m;

    stack<int> p1,p2;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p1.push(x);
    }

    for(int i=0;i<(n+m);i++){
        int x;
        cin>>x;
        p2.push(x);
    }

    int 
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