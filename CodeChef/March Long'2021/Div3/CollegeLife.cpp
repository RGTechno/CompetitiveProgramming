#include <bits/stdc++.h>
using namespace std;

void collegeLife() {
      long long int n,e,h,a,b,c;
	    cin>>n>>e>>h>>a>>b>>c;
	    long long int min_cost = n*(a+b+c);
	    long long int zero = 0;
	    long long int z = max((6*n-3*e-2*h),zero);
	    for(long long int j=z;j<=min(e,min(h,n));j++){
	        int x,y;
	        if(a>b){
	            y = min((h-j)/3,n-j);
	            x = min(n-y-j,(e-j)/2);
	        }
	        else{
	            x = min((e-j)/2,n-j);
	            y = min(n-x-j,(h-j)/3);
	        }
	        if(x+y+j==n&&x>=0&&y>=0){
	            long long int cost = a*x+b*y+c*j;
	            if(cost<min_cost){
	                min_cost=cost;
	            }
	        }
	    }
	    if(min_cost==n*(a+b+c)){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<min_cost<<endl;
	    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    collegeLife();
	}
	return 0;
}
