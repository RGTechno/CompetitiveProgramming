#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int a[n];
    int count_0 = 0;
    int count_1 = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) count_1++;
        else count_0++;
    }

    if(count_1>=count_0){
        cout<<"Yes";
    }
    else cout<<"No";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}