#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans = 0;
    int i;
    for(i=0;i<n-1;){
        if(s[i]==s[i+1]){
            ans+=1;
            i+=2;
        }
        else{
            ans+=1;
            i++;
        }
    }

    if(i>=n){
        cout<<ans<<endl;
    }

    else{
        ans+=1;
        cout<<ans<<endl;
    }

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