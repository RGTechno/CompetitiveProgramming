#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int n,q;
    cin>>n>>q;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    // for(auto i:arr) cout<<i<<" ";


    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        int l=-1,r=n;
        while(r-l>1){
            int mid=(l+r)/2;
            if(arr[mid]>=k){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        // cout<<l<<endl;
        int ans = (n-l-1);
        cout<<ans<<endl;
    }

    
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