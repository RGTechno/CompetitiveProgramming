#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int
#define mod 1000000007

void solve()
{
    int r, c;
    cin >> r >> c;

    int nr = (2 * r) + 1, nc = (2 * c) + 1;

    char arr[nr][nc];

    int row = 0;
    while (row < nr)
    {
        int col = 0;
        if (row <= 1)
        {
            while (col < nc)
            {
                if (col <= 1)
                {
                    arr[row][col] = '.';
                }
                else
                {
                    if (row & 1) // |.|.|
                    {
                        if (col & 1)
                        {
                            arr[row][col] = '.';
                        }
                        else
                        {
                            arr[row][col] = '|';
                        }
                    }
                    else // +-+-+
                    {
                        if (col & 1)
                        {
                            arr[row][col] = '-';
                        }
                        else
                        {
                            arr[row][col] = '+';
                        }
                    }
                }
                col++;
            }
        }
        else
        {
            while (col < nc)
            {
                if (row & 1) // |.|.|
                {
                    if (col & 1)
                    {
                        arr[row][col] = '.';
                    }
                    else
                    {
                        arr[row][col] = '|';
                    }
                }
                else // +-+-+
                {
                    if (col & 1)
                    {
                        arr[row][col] = '-';
                    }
                    else
                    {
                        arr[row][col] = '+';
                    }
                }
                col++;
            }
        }
        row++;
    }

    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;

    int m = 1;
    while (m <= t)
    {
        cout << "Case #" << m << ":" << endl;
        solve();
        m++;
    }
    return 0;
}