#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int n;
    cin>>n;

    map<string,int> mp;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }

    int maxVote = -1;
    string winner = "";
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>maxVote){
            maxVote=it->second;
            winner = it->first;
        }
    }

    cout<<winner<<endl;
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