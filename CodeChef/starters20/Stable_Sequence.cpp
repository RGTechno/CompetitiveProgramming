#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long int

bool isStable(int a[],int n){
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]) return false;
    }

    return true;
}

int maxElementIndex(int a[],int n){
    int maxIndex = 0;
    int maxEle = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>=maxEle){
            maxIndex = i;
            maxEle = a[i];
        }
    }

    return maxIndex;
}

int solve(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int operations = 0;

    if(isStable(arr,n)){
        operations+=0;
        return operations;
    }

    else{
        int maxIndex = maxElementIndex(arr,n);

        // cout<<"Max INDEX "<<maxIndex<<endl;

        if(maxIndex==n-1){
            operations+=1;
            return operations;
        }
        operations+=2;
        return operations;
    }

    


}

int32_t main()
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