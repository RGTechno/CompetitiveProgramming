#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int m,n,k;
    cin>>m>>n>>k;

    if(n*k>=m){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main()
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