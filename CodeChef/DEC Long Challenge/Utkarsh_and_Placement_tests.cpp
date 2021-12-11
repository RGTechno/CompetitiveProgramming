#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    char f,s,t;

    cin>>f>>s>>t;

    char o1,o2;
    cin>>o1>>o2;

    char ans;

    if(o1==f or o2==f) ans=f;
    else if(o1==s or o2==s) ans=s;
    else if(o1==t or o2==t) ans=t;

    cout<<ans<<endl;
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