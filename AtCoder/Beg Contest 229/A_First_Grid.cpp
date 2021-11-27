#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    int mat[2][2];

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '#')
        {
            mat[0][i] = 1;
        }
        else if (s1[i] == '.')
        {
            mat[0][i] = 0;
        }
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '#')
        {
            mat[1][i] = 1;
        }
        else if (s2[i] == '.')
        {
            mat[1][i] = 0;
        }
    }

    if(mat[0][0]==1 and mat[1][1]==1 and mat[0][1]==1 and mat[1][0]==1){
        cout<<"Yes"<<endl;
    }

    else if(mat[0][0]==mat[1][1] and mat[0][1]==mat[1][0]){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}