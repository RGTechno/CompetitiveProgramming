#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    map<pair<int,int>,int> mp;

    int count = 0;
    for(int i=0;i<n;i++){
        mp[{b[i],a[i]}]++;
        if(mp.count({a[i],b[i]})){
            count+=mp[{b[i],a[i]}];
        }
    }

    cout<<(count/2)<<endl;
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