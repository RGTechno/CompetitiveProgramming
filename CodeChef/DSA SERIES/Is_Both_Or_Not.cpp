#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int n;
    cin>>n;
    if(n%55==0){
        cout<<"BOTH"<<endl;
    }
    else if(n%11==0||n%5==0){
        cout<<"ONE"<<endl;
    }
    else{
        cout<<"NONE"<<endl;
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