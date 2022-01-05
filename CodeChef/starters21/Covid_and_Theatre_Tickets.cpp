#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

void solve(){

    //n -> no of rows
    //m -> no of seats in a row

    int n,m,seatOccupiedInRow,totalRowsOccupied;
    cin>>n>>m;

    if(m&1){
        seatOccupiedInRow = m-(m/2);
    }else seatOccupiedInRow = m/2;

    if(n&1){
        totalRowsOccupied = n-(n/2);
    }else totalRowsOccupied = n/2;

    // cout<<totalRowsOccupied<<" - "<<seatOccupiedInRow<<endl;

    cout<<seatOccupiedInRow*totalRowsOccupied<<endl;
}

int32_t main()
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