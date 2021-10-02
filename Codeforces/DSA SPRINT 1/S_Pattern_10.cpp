#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n/2){
        int nsp=1;
        while(nsp<=n/2){
            cout<<" ";
            nsp++;
        }

        int nst = 1;
        while(nst<=row){
            cout<<"*";
            nst++;
        }
        cout<<endl;
        row++;
    }

    int i=1;
    while(i<=n){
        cout<<"*";
        i++;
    }

    cout<<endl;

    int r=n/2;
    while(r>=1){
        int nsp=1;
        while(nsp<=n/2){
            cout<<" ";
            nsp++;
        }

        int nst = 1;
        while(nst<=r){
            cout<<"*";
            nst++;
        }
        cout<<endl;
        r--;
    }

    return 0;
}