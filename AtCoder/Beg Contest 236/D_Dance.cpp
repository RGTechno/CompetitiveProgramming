#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

vector<pair<int, int>> get_pairs(int n)
{
    vector<pair<int, int>> v;

    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i != j and i < j)
            {
                v.push_back({i, j});
            }
        }
    }

    return v;
}

int solve()
{
    int n;
    cin >> n;

    vector<vector<int>> arr(2 * n - 1, vector<int>(2 * n - 1, -1));

    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - i - 1; j++)
        {
            cin >> arr[i][j];
        }
    }

    if (n == 1)
        return arr[0][0];
    vector<pair<int, int>> pairs = get_pairs(n);

    // for (auto &i : pairs)
    //     cout << i.first << " " << i.second << endl;

    int maxXor = 0;

    int start = 0, end = pairs.size() - 1;

    // while (start <= end)
    // {
    //     // cout<<pairs[end].second - 2<<endl;
    //     int z = arr[pairs[start].first - 1][pairs[start].second - 2] xor arr[pairs[end].first - 1][pairs[end].second - 2];
    //     cout<<arr[pairs[start].first - 1][pairs[start].second - 2]<<" - "<<arr[pairs[end].first - 1][pairs[end].second - 2]<<endl;
    //     maxXor = max(maxXor, z);
    //     start++;
    //     end--;
    // }

    for (int i = 0; i < pairs.size(); i++)
    {
        for (int j = i+1; j < pairs.size(); j++)
        {
            if (pairs[i].first != pairs[j].second and pairs[i].second != pairs[j].first)
            {
                if (arr[pairs[i].first - 1][pairs[i].second - 2] >= 0 and arr[pairs[j].first - 1][pairs[j].second - 2] >= 0){
                    // cout<<pairs[i].first<<","<<pairs[i].second<<" - "<<pairs[i].first<<","<<pairs[i].second<<endl;
                    int z = arr[pairs[i].first - 1][pairs[i].second - 2] xor arr[pairs[j].first - 1][pairs[j].second - 2];
                    maxXor = max(maxXor, z);
                    cout<<arr[pairs[i].first - 1][pairs[i].second - 2]<<" - "<<arr[pairs[j].first - 1][pairs[j].second - 2]<<endl;
                }
            }
        }
    }

    return maxXor;

    // for(int i=0;i<2*n-1;i++){
    //     for(int j=0;j<2*n-1;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}