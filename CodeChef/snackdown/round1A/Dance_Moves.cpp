#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int solve(){
    int x,y;
    cin>>x>>y;

    int count = 0;

    if(x==y) return 0;

    if(x<y){
        while(x<y){
            x+=2;
            count++;
        }
        while(x>y){
            x-=1;
            count++;
        }
    }
    else{
        while(x>y){
            x-=1;
            count++;
        }
    }

    return count;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}