#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int n,m;
    cin>>n>>m;

    

    int stringLength = (n+m+2);

    string s;

    if(n>=m){
        for(int i=0;i<stringLength;i++){
            if(i%2==0){
                s.push_back('0');
            }
            else s.push_back('1');
        }
    }
    else {
        for(int i=0;i<stringLength;i++){
            if(i%2==0){
                s.push_back('1');
            }
            else s.push_back('0');
        }
    }

    cout<<stringLength<<endl<<s<<endl;
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