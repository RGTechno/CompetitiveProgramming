#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    int value=1;
    while(row<=n){
        int nst = 1;
        while(nst<=row){
            cout<<value<<" ";
            value++;
            nst++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}