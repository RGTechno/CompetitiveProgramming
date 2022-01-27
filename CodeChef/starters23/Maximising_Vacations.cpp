#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

vector<int> cZeroes(string &str, int x)
{
    vector<int> czeros;
    int s = 0;
    int e = str.size() - 1;
    int m = s;
    int count = 0;
    while (m <= e)
    {
        if (str[s] == '0')
        {
            if (str[s] == str[m])
            {
                count++;
                m++;
            }
            else
            {
                // cout << m << " - " << s << endl;
                czeros.push_back(count);
                s = m;
                count = 0;
                // m++;
            }
        }
        else
        {
            s++;
            m++;
        }
    }

    if (count > 0)
        czeros.push_back(count);

    sort(czeros.begin(), czeros.end());
    return czeros;
}

// int solve(string &str,int n,int x,int ans=0){

//     if(n==0){
//         return(ans/x);
//     }

//     int ans1,ans2;

//     if(str[n-1]=='1'){
//         // change or not change
//         str[n-1]='0';
//         ans1 = solve(str,n-1,x,ans); // change krke kitni vac
//         str[n-1]='1';
//     }
//     else{
//         ans2 = solve(str,n-1,x,ans);
//     }

//     ans = max(ans,max(ans1,ans2));

//     return ans;
// }

int solve()
{
    int n, x;
    cin >> n >> x;

    string str;
    cin >> str;

    int ans = 0;

    // find consective zeroes >= x

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            str[i] = '0';
            vector<int> v = cZeroes(str, x);
            str[i] = '1';
            bool allOnes = true;

            for (auto i : v)
            {
                if (i != 1)
                {
                    allOnes = false;
                }
                if (!allOnes)
                {
                    for (auto i : v)
                    {
                        int sum = i;
                        if (sum < n)
                        {
                            if (sum >= x)
                            {
                                ans = max(sum / x, (sum + 1) / x);
                            }
                        }

                        else
                        {
                            if ((sum) >= x)
                            {
                                ans = sum / x;
                            }
                        }
                    }
                }
                else
                {
                    // cout << "Helele";
                    int sum = 2;

                    if (sum < n)
                    {
                        ans = max(sum / x, (sum + 1) / x);
                    }
                }
            }
        }
        else
        {
            vector<int> v = cZeroes(str, x);
            bool allOnes = true;

            for (auto i : v)
            {
                if (i != 1)
                {
                    allOnes = false;
                }
                if (!allOnes)
                {
                    for (auto i : v)
                    {
                        int sum = i;
                        if (sum < n)
                        {
                            if (sum >= x)
                            {
                                ans = max(sum / x, (sum + 1) / x);
                            }
                        }

                        else
                        {
                            if ((sum) >= x)
                            {
                                ans = sum / x;
                            }
                        }
                    }
                }
                else
                {
                    // cout << "Helele";
                    int sum = 2;

                    if (sum < n)
                    {
                        ans = max(sum / x, (sum + 1) / x);
                    }
                }
            }
        }
    }

    // for (auto i : v)
    //     cout << i << " ";
    // cout << endl;
    return ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve()+1 << endl;
    }
    return 0;
}