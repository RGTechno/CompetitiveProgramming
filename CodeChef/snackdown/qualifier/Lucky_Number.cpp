#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int a,b,c;

    cin>>a>>b>>c;

    if(a==7 or b==7 or c==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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