#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int l;
        string s;
        cin>>s;
        l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                c++;
                if(c==3){
                    cout<<"Happy"<<endl;
                    break;
                }
                
                
            }
            else c=0;
            }
        
        if(c != 3){
                cout<<"Sad"<<endl;
        }
    }
    return 0;
}
