#include <iostream>
using namespace std;

int main()
{
    int n;

    cin>>n;

    long long int ans=0;

    for(int i=1;i<=n;i++){
        ans+=i;
    }

    cout<<ans<<endl;

    return 0;
}