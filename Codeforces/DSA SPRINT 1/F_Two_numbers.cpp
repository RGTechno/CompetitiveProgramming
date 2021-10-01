#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    int floor = a / b;

    float ceil = (a * 1.0 / b);

    if (ceil - floor == 0.0)
    {
        ceil = floor;
    }
    else
    {
        ceil = floor + 1;
    }

    float exact = (a * 1.0) / b;

    int round = ceil;

    if (ceil - exact > 0.5)
    {
        round = floor;
    }

    cout << floor << endl
         << ceil << endl
         << round;

    return 0;
}