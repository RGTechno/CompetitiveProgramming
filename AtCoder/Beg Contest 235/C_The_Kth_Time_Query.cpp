#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){

    int n,q;
    cin>>n>>q;

    vector<int> arr(n);

    int maxE = INT_MIN;

    map<int,vector<int>> mp;

    for(int i=0;i<n;i++){
        cin>>arr[i];

        mp[arr[i]]=vector<int>();      
        // maxE = max(maxE,arr[i]);
    }

    for(int i=0;i<n;i++){
        mp[arr[i]].push_back(i+1);
    }

    // cout<<mp[1][3]<<endl;

    while(q--){
        int x,k;

        cin>>x>>k;

        if(k>mp[x].size()){
            cout<<"-1"<<endl;
        }
        else{
            cout<<mp[x][k-1]<<endl;
        }
    }


    // vector<vector<int>> freq(maxE+1,vector<int>());

    // for(int i=0;i<n;i++){
    //     freq[arr[i]].push_back(i+1);
    // }

    // for(int i=0;i<=maxE;i++){
    //     for(int j=0;j<freq[i].size();j++){
    //         cout<<freq[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


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