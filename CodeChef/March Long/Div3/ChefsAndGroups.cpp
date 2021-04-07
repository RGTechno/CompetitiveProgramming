#include <bits/stdc++.h>
using namespace std;

int countGroups(){
    string s;
    cin>>s;
    int n = s.length();
    int count = 0;
    for(int j=0;j<n;j++){
        if(s[j]!=s[j+1]&&s[j]=='1'){
            count++;
        }
    }
    return count;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int rs = countGroups();
	    cout<<rs<<endl;
	}
	return 0;
}
