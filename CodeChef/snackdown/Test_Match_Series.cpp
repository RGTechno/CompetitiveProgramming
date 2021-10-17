#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

void solve(){
    int a[5];

    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    int count_India=0,count_Eng=0,count_Draw=0;

    for(int i=0;i<5;i++){
        if(a[i]==1) count_India++;
        else if(a[i]==2) count_Eng++;
        else count_Draw++;
    }

    if(count_India>count_Eng){
        cout<<"INDIA"<<endl;
    }
    else if(count_Eng>count_India){
        cout<<"ENGLAND"<<endl;
    }
    else if(count_Eng==count_India or count_Draw==5){
        cout<<"DRAW"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}