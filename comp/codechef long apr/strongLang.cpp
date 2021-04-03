#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n ,k;
        cin>>n>>k;
        char s[n];
        cin>>s;
        cout<<s<<"\n";
        int flag=0;
        for(int j=0;j<n;j++){
            int flag=0;
            for(int l=j;l<j+k;l++){
                if(s[l]=='*'){
                    flag=1;
                    
                }
                
            }
            
        }
        if(flag==1){
            cout<<"true";
        }else{
            cout<<"false";
        }
    
    }
}