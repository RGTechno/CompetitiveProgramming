#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

string solve()
{
    int n, d; 
    long long int c, m;

    cin >> n >> d >> c >> m;

    string s;
    cin >> s;

    int count_D = 0, count_C = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'D')
        {
            count_D++;
        }
        else if (s[i] == 'C')
        {
            count_C++;
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'D' and d <= 0)
        {
            return "NO";
        }
        else if (s[i] == 'C' and c <= 0 and count_D>0)
        {
            return "NO";
        }

        else if(s[i]=='D') {
            count_D--;
            d--;
            c+=m;
        }
        else if(s[i]=='C') {
            count_C--;
            c--;
        }
    }

    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for(int i=1;i<=t;i++){
        cout<<"Case #"<<i<<": "<<solve()<<endl;
    }
    return 0;
}