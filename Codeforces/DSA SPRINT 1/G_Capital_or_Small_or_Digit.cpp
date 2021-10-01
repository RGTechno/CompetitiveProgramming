#include <iostream>
using namespace std;

int main()
{

    char ch;
    cin>>ch;

    if(ch>=48&&ch<=57){
        cout<<"IS DIGIT";
    }
    else if(ch>=65&&ch<=90){
        cout<<"IS CAPITAL";
    }
    else if(ch>=97&&ch<=122){
        cout<<"IS SMALL";
    }

    return 0;
}