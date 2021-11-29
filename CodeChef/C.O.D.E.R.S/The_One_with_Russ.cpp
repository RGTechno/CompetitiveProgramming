#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve()
{
    int n, x, k;

    cin >> n >> x >> k;

    vector<int> A(n);
    vector<int> B(n);

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        A[i] = m;
    }

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        B[i] = m;
    }

    int count = 0;

    for(int i=0;i<n;i++){
        if(abs(A[i]-B[i])<=k){
            count++;
        }
    }

    if(count>=x){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}