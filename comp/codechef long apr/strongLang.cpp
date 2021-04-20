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
        short flag=0;
        for(int j=0;j<=(n-k);j++){
            if(s[j]=='*'){
                long long int count =0;
                for(int l=j;l<j+k;l++){
                    if(s[l]=='*'){
                        count++;               
                    }else{
                        break;
                    }  
                }
                if(count ==k){
                    flag=1;
                    break;
                }else{
                    j=j+count;
                }   
            }
            else{
                j++;
            }      
        }
        if(flag==0){
            cout<<"NO"<<"\n";
        }else{
            cout<<"YES"<<"\n";
        }
    }
}