#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int n,m;
    cin>>n>>m;

    set<pair<int,string>> st1;
    set<string> st2;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        st1.insert({i,s});
    }

    // vector<string> ans;

    for(int i=0;i<m;i++){
        string s;
        cin>>s;

        st2.insert(s);
    }

    vector<bool> ans(n);

    for(auto &it:st1){
         if(st2.count(it.second)){
            ans[it.first]=true;
        }
        else {
            ans[it.first]=false;
        }
    }

    for(int i=0;i<n;i++){
        if(ans[i]){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
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