#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{

    string s;
    cin >> s;

    string s1 = s;

    int length = s.length();

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (s[i] == '0')
        {
            s1[i] = '1';
        }
        else if (s[i] == '1')
        {
            s1[i] = '0';
        }
    }

    // cout << "s= " << s << endl;
    // cout << "s1= " << s1 << endl;

    for (int i = 0; i < length; i++)
    {
        if (s[i] == '0')
        {
            string temp = s;
            s = s1;
            s1 = temp;

            count++;
        }
    }

    cout << count << endl;
}

int main()
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