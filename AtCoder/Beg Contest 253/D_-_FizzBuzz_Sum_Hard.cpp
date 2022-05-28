#include <bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define int long long int
#define mod 1000000007
 
int gcd(int a, int b)
{
    if (b != 0)
        return gcd(b, a % b);
    return a;
}
 
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
 
    set<int> st;
 
    int total = (n * (n + 1)) / 2;
 
    int gcdAB = gcd(a, b);
 
    int sum_of_multiple_of_A = (a * (((n / a) * ((n / a) + 1)) / 2));
    int sum_of_multiple_of_B = (b * (((n / b) * ((n / b) + 1)) / 2));
 
    int lcm = (a * b) / gcdAB;
    int sum_of_multiple_of_both_AandB = (lcm * (((n / lcm) * ((n / lcm) + 1)) / 2));
 
    int y = (sum_of_multiple_of_A + sum_of_multiple_of_B);
    int x = y - sum_of_multiple_of_both_AandB;
 
    int ans = total - x;
    cout << ans << endl;
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