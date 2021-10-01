#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int row=n;

    while(row>=1){
        int ns = 1;

        while(ns<=row){
            cout<<"*";
            ns++;
        }

        cout<<endl;
        row--;
    }

    return 0;
}