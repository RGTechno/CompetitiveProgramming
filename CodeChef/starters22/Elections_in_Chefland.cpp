#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    string ans;

    if(a>b and a>c and a>50){
        ans="A";
    }
    else if(b>a and b>c and b>50){
        ans = "B";
    }
    else if(c>a and c>b and c>50){
        ans = "C";
    }
    else{
        ans="NOTA";
    }

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