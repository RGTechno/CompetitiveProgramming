#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

int solve()
{
    int a, b;
    cin>>a>>b;
    if (b == a)
    {
        return 2;
    }
    
    if(b==1) return (a-b)*2;

    return (a-(b-1))*2;
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