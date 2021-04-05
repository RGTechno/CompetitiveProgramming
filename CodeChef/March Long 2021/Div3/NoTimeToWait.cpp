#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	string result="NO";
	cin>>n>>h>>x;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int j=0;j<n;j++){
	    if(x+a[j]>=h){
	        result="YES";
	        break;
	    }
	}
	cout<<result;
	return 0;
}