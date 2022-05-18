#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (auto &i : arr)
    {
        int x;
        cin >> x;

        int tmp = abs(x);
        i = tmp;
    }

    vector<int> pos;
    vector<int> neg;

    int neg_sum = 0;
    int pos_sum = 0;

    int actual_alt_sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i & 1)
        {
            actual_alt_sum -= arr[i];
            neg.push_back(arr[i]);
            neg_sum += arr[i];
        }
        else
        {
            actual_alt_sum += arr[i];
            pos.push_back(arr[i]);
            pos_sum += arr[i];
        }
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    int neg_sz = neg.size();
    int mx_ele = neg[neg_sz - 1];

    int mn_ele = INT_MAX;
    for (auto &i : pos)
    {
        if (i < mx_ele)
        {
            mn_ele = min(mn_ele, i);
        }
    }

    // for (auto &i : pos)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (auto &i : neg)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // cout << "ALT " << actual_alt_sum << endl;

    int mx = actual_alt_sum;

    int s1 = 0, s2 = 0, e1 = pos.size() - 1, e2 = neg.size() - 1;

    // while (s1 <= e1 and s2 <= e2)
    // {
    //     if (neg[s2] > pos[s1])
    //     {
    //         if (((pos_sum - pos[s1] + neg[s2]) - (neg_sum - neg[s2] + pos[s1])) > mx)
    //         {
    //             mx = max(mx, ((pos_sum - mn_ele + mx_ele) - (neg_sum - mx_ele + mn_ele)));
    //             break;
    //         }
    //     }
    //     s1++;
    //     s2++;
    // }

    mx = max(mx, ((pos_sum - mn_ele + mx_ele) - (neg_sum - mx_ele + mn_ele)));

    cout << mx << endl;
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