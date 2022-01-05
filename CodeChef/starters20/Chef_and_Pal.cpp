#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){
    int n;
    cin>>n;

    if(n&1){
        cout<<-1<<endl;
    }
    else{
        // 10001 type
        string s1;
        s1.push_back('1');

        for(int i=1;i<(n/2)-1;i++){
            s1.push_back('0');
        }

        s1.push_back('1');

        //01110 type
        string s2;
        s2.push_back('0');

        for(int i=1;i<(n/2)-1;i++){
            s2.push_back('1');
        }

        s2.push_back('0');

        //final 
        string ans = s1+s2;

        cout<<ans<<endl;
    }
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