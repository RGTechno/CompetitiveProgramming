#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int col=0;
    while(col<n){
        int ne=n-a[col];
        while(ne>0){
            cout<<endl;
            ne--;
        }
        int ns=a[col];
        while(ns>0){
            cout<<"*"<<endl;
            ns--;
        }
    }
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