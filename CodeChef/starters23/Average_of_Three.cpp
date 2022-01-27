#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve(){
    int n;
    cin>>n;

    int sum = 3*n;

    int a=1,b=2;

    int x1 = (a+b);

    cout<<a<<" "<<b<<" "<<(sum-x1)<<endl;

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