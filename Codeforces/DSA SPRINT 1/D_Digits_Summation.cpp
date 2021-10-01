#include <iostream>
using namespace std;

int main()
{

    long long int a,b;

    cin>>a>>b;

    long long int ans = (a%10)+(b%10);

    cout<<ans;

    return 0;
}