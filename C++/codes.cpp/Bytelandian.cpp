#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n[10];
    long long int temp=0;
    
    for(int i=0; i<10;i++){
        cin>>n[i];
        
    }
    for(int i=0; i<10;i++){
       
        temp=n[i]/2+n[i]/3+n[i]/4;
        if(temp>n[i]){
            cout<<temp<<endl;
        }else{
            cout<<n[i]<<endl;
        }
        
    }
    

}