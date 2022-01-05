#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int arr[7];

    for(int i=0;i<7;i++){
        cin>>arr[i];
    }

    int s=0,e=6;

    vector<int> ans;

    int high = arr[e];

    while(s<=e){
        int mid = (s+e)/2;

        if(arr[mid]<=high/2){
            ans.push_back(arr[mid]);
        }


        e=mid-1;
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
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