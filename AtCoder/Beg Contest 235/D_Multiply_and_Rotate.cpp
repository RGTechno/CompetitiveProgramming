#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int base(int n){
    string k = to_string(n);

    char f = k[0];

    string sub = k.substr(1);

    string s = sub;

    s.push_back(f);

    return stoll(s);
}

int shift(int n){

    int l = n%10;
    int r = n/10;

    string s = to_string(l)+to_string(r);

    int num = stoll(s);

    return num;

}

int minWays(int init,int a,int n,int base){

    if((init>a*n) and init>base){
        return INT_MAX;
    }

    if(init==n){
        return 1;
    }

    if(init>10 and init%10!=0){
        return min(minWays(init*a,a,n,base),minWays(shift(n),a,n,base));
    }
    else return minWays(init*a,a,n,base);
}

int solve(){

    int a,n;
    cin>>a>>n;

    return minWays(1,a,n,base(n))==INT_MAX ? -1 : minWays(1,a,n,base(n));
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