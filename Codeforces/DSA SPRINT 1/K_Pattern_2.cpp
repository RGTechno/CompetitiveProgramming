#include <iostream>
using namespace std;

int main()
{

    int n;

    cin>>n;

    int part1=1;

    int k = n/2;

    while(part1<=(n/2)){

        int nsp = k;

        while(nsp>0){
            cout<<" ";
            nsp--;
        }
        int nst = (2*part1)-1;

        while(nst>0){
            cout<<"*";
            nst--;
        }

        cout<<endl;
        k--;
        part1++;
    }


    int row=1;

    while(row<=(n/2)+1){
        int nsp = 0;

        while(nsp<row-1){
            cout<<" ";
            nsp++;
        }

        int nst = n;

        while(nst>=(2*row)-1){
            cout<<"*";
            nst--;
        }

        cout<<endl;
        row++;
    }


    return 0;
}