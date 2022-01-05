#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){

    map<char,int> mp = {{'R',3},{'B',2},{'G',1}};

    char a,b;

    cin>>a>>b;

    if(mp[a]>mp[b]){
        cout<<a<<endl;
    }
    else if(mp[a]<mp[b]) cout<<b<<endl;
    else cout<<a<<endl;

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