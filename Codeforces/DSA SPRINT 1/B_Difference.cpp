#include <iostream>
using namespace std;

// X=(A∗B)−(C∗D)

int main()
{

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    long long int ans = (a*b)-(c*d);

    cout<<ans<<endl;


    return 0;
}