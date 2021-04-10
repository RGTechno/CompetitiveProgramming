#include <bits/stdc++.h>
using namespace std;

vector<int> convToBin(int n){
    vector<int> getBits;
    while(n>0){
        int k = n%2;
        getBits.push_back(k);
        n=n/2;
    }
    reverse(getBits.begin(),getBits.end());
    return getBits;
}

void maxPro(vector<int> arr){
    long long int a=0,b=0;
    int size = arr.size();
    for(int j=0;j<size;j++){
        if(arr[j]==0){
            a+=pow(2,size-j-1);
            b+=pow(2,size-j-1);
        }
        else{
            if(a==b){
                a+=pow(2,size-j-1);
            }
            else{
                if(a<b){
                    a+=pow(2,size-j-1);
                }
                else{
                    b+=pow(2,size-j-1);
                }
            }
        }
    }
    cout<<a*b<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    long long int c;
	    cin>>c;
	    vector<int> bin;
	    bin = convToBin(c);
	    maxPro(bin);
	}
	return 0;
}