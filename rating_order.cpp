#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<"No\n";return;
        }
    }
    cout<<"Yes\n";
}

int main(){
    int t;
    cin>>t;
    while(t-- && t>=0){
        solve();
    }
    return 0;
}
