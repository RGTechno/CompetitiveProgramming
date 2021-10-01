#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minEle = min(a, min(b, c));

    int maxEle = max(a,max(b,c));

    cout<<minEle<<" "<<maxEle;

    return 0;
}