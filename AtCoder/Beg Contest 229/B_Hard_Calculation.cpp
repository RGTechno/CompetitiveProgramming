#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

string solve(){
    int a,b;
    cin>>a>>b;

    while(a>0 and b>0){
        int a1 = a%10;
        int b1 = b%10;

        a=a/10;
        b=b/10;

        if((a1+b1)>=10) return "Hard";
    }

    return "Easy";
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