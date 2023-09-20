#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string wild(string x,string y){
    if(x.length() != y.length()){
        return "No";
    }
    for(int i=0; i<x.length();i++){
        if((x[i] != y[i] && x[i] != '?' && y[i] != '?')){
            return "No";
    }
    }
    return "Yes";
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string x,y;
	    cin>>x>>y;
	    string result(wild(x,y));
	    cout<<result<<endl;
	}
	return 0;
}
