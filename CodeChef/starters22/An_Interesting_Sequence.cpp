#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int solve(int n){

    if(n&1) return 1;

    int sub = solve(n/2);

    return sub+1;
}

int solve()
{
    int n;
    cin >> n;

    return solve(n)-1;    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}