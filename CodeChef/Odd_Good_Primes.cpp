#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

long long int noOfFactors(long long int n)
{

    long long int count = 0;

    for (long long int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                count++;
            else
                count += 2;
        }
    }

    return count;
}

bool isOddPrime(long long int n)
{
    if (n == 0 || n == 1)
        return false;

    for (long long int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }

    if ((n & 1) == 0)
        return false;

    return true;
}

void solve()
{
    long long int n;
    cin >> n;
    long long int a[n];
    a[0] = -1;

    long long int count = 0;

    for (long long int i = 1; i < n; i++)
    {
        a[i] = noOfFactors(i);
        if (isOddPrime(a[i]))
        {
            count++;
        }
    }

    cout << count << endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}