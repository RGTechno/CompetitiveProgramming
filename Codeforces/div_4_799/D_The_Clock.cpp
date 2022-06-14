#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

int toMins(string &s)
{
    string hours;
    hours.push_back(s[0]);
    hours.push_back(s[1]);
    string minutes;
    minutes.push_back(s[3]);
    minutes.push_back(s[4]);

    int hrs = stoi(hours);
    int mins = stoi(minutes);

    int ans = (hrs * 60) + mins;

    return ans;
}

string minsToString(int minutes)
{
    int hrs = minutes / 60;
    if (hrs >= 24)
    {
        minutes -= (hrs * 60);
        hrs = hrs - 24;
    }
    string hours = to_string(hrs);
    string ans(5, '0');
    ans[2] = ':';
    if (hours.size() == 2)
    {
        ans[0] = hours[0];
        ans[1] = hours[1];
    }
    else if (hours.size() == 1)
    {
        ans[1] = hours[0];
    }

    int mins = minutes - (hrs * 60);
    if (mins >= 60)
        mins - 60;
    string min = to_string(mins);
    // cout << min << endl;

    if (min.size() == 2)
    {
        ans[3] = min[0];
        ans[4] = min[1];
    }
    else
    {
        ans[4] = min[0];
    }

    return ans;
}

bool isPalin(string &s)
{
    string str = s;
    reverse(str.begin(), str.end());

    return str == s;
}

void solve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;

    set<string> st, ans;
    string str = s;
    int count = 0;
    if (isPalin(str))
        ans.insert(str);
    while (st.count(str) == 0)
    {
        st.insert(str);
        int to_mins = toMins(str);
        int nextMins = x + to_mins;
        // cout << nextMins << " " << str << endl;
        string stringReq = minsToString(nextMins);

        if (isPalin(stringReq))
        {
            ans.insert(stringReq);
            // cout << stringReq << endl;
            count++;
        }
        str = stringReq;
    }

    cout << ans.size() << endl;
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