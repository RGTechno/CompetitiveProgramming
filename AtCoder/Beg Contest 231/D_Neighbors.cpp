#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

string solve(){
    int n,m;
    cin>>n>>m;

    set<int> st;

    map<int,int> mp;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;

        if(mp[a]>2 or mp[b]>2){
            return "No";
        }else{
            mp[a]++;
            mp[b]++;
        }

        st.insert(a);
        st.insert(b);

    }
    return "Yes";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}