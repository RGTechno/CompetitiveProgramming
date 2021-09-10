#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve()
{
    int n;
    cin >> n;

    int count = 0;
    int arr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        if (n % (i + 1) == 0)
        {
            count++;
            arr[i] = (i + 1);
        }
    }
    cout << count << endl;

    for (int x : arr)
    {
        if (x != 0)
        {
            cout << x << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}