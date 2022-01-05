#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(){
    int n;
    cin>>n;

    if(n==1){
        return 1;
    }

    int i=1,count=0;
    while(i<=n){
        i=i*2;
        count++;
    }

    // cout<<count<<endl;
    int highest = pow(2,count)-1;

    // cout<<highest<<endl;

    return (highest+1)%mod;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}