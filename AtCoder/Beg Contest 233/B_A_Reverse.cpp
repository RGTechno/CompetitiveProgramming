#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

string solve(){
    int l,r;
    string str;

    cin>>l>>r;
    cin>>str;

    int s=l-1,e=r-1;

    while(s<=e){
        swap(str[s],str[e]);
        s++,e--;
    }

    return str;


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