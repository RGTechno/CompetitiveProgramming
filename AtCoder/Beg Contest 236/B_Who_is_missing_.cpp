#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(){
    int n;
    cin>>n;

    int arr[4*n-1];

    map<int,int> mp;

    for(int i=0;i<(4*n-1);i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int ans; 

    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second<4) ans = it->first;
    }

    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}