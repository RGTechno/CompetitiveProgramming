#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

bool tillPalin(string &s)
{
    // check after removing a's from last
    int n = s.size();

    int cL=0,cF=0;

    int i = n - 1;
    while (i >= 0 and s[i] == 'a')
    {
        i--;
        cL++;
    }

    // also remove a's from beg if any
    int j = 0;
    while (j < n and s[j] == 'a')
    {
        j++;
        cF++;
    }

    if(cF>cL) return false;

    if (j >= i)
        return true;

    if(i==n-1 and j>0){
        // we have strings with a's in front but not in end

        return false;
    }

    string sub = s.substr(j, (i - j + 1));

    // cout<<sub<<" ";

    string temp = sub;

    reverse(temp.begin(), temp.end());

    return sub == temp;
}

void solve()
{

    string s;

    cin >> s;

    if (tillPalin(s))
        cout << "Yes" << endl;

    else
        cout << "No" << endl;
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