#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int count1=0,count0=0;

    for(auto i:s){
        if(i=='1') count1++;
        else count0++;
    }

    if(count1 < 2 or count0 < 2) return 0;

    return min(count1,count0)-1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}