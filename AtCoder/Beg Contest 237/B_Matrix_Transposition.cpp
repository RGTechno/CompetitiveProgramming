#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int h,w;

    cin>>h>>w;

    int arr[h][w];

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>arr[i][j];
        }
    }

    int tr[w][h];

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            tr[j][i]=arr[i][j];
        }
    }

    for(int i=0;i<w;i++){
        for(int j=0;j<h;j++){
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
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