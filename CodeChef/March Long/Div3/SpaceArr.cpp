#include <bits/stdc++.h>
using namespace std;

void winner(){
    int n;
	cin>>n;
	int a[n];
	for(int j=0;j<n;j++){
	    cin>>a[j];
	}
	sort(a,a+n);
	int count = 0;
	int inv = 0;
	    
	for(int k=0;k<n;k++){
	    if((k+1-a[k])<0){
	        inv=1;
            break;
        }
        count+=(k+1-a[k]);
	}
	if(inv == 1){
	    cout<<"Second"<<endl;
	}
	else{
	   if(count%2==0){
	       cout<<"Second"<<endl;
	   }
	   else{
	       cout<<"First"<<endl;
	   }
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    winner();
	}
	return 0;
}