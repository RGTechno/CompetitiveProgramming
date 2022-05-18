#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

char vowels[] = {'a', 'e', 'i', 'o', 'u'};

int binarySearch(char ch)
{
    int r = 6, l = -1;

    while (r - l > 1)
    {
        int m = l + (r - l) / 2;

        if (vowels[m] > ch)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    return l;
}

int solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq[n] = {0};

    for (int i = 0; i < n; i++)
    {
        int closest = binarySearch(s[i]);

        int diff_from_closest = s[i] - vowels[closest];
        int diff_from_closest_2 = INT_MAX;
        if (closest != 5)
            diff_from_closest_2 = vowels[closest + 1] - s[i];

        // cout << "d2 = " << diff_from_closest_2 << endl;

        if (diff_from_closest == diff_from_closest_2)
        {
            // cout << "hehe\n";
            freq[i] = 2;
        }
        else
        {
            freq[i] = 1;
        }
    }

    int ans = 1;

    for (auto &i : freq)
    {
        // cout << i << " ";
        if (i != 0)
        {
            ans *= i;
        }
    }

    // cout << endl;

    return ans % mod;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}