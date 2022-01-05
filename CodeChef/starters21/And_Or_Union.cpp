#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1) {
        cout<<"0"<<endl;
        return;
    }

    sort(arr,arr+n);

    int a1 = arr[n-1];
    int a2 = arr[n-2];

    int chk = (a1&a2);
    

    int ans = (chk | arr[0]);

    // cout<<chk<< " - "<<ans<<endl;

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