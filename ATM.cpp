#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int withdrawelAmount;
    float currentBalance, transactionFee = 0.50;

    cin >> withdrawelAmount >> currentBalance;
    if (withdrawelAmount + transactionFee > currentBalance || withdrawelAmount > currentBalance || withdrawelAmount % 5 != 0)
    {
        cout << currentBalance;
    }
    else
    {
        float total = withdrawelAmount + transactionFee;
        float remaining = currentBalance - total;
        cout << fixed << setprecision(2) << remaining;
    }

    return 0;
}