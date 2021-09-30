#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int ways(int n){
    if(n==0) return 0;

    ways(n-2);
    return 1;
}

void solve(){
    int n,l;
    cin>>n>>l;

    
}

int main()
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