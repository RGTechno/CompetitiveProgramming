#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int a,b,c;

    cin>>a>>b>>c;

    if((a+b)==c or (a+c)==b or (b+c)==a){
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