#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ar[n];
        int k=0;
        for(int j =1;j<=n;j++){
            cin>>ar[j];
        }
        int flag=0;
        for(int j=1;j<=n;j++){
            if(ar[j]==k){
                flag=1;
                k++;
            }else if(ar[j]==(k+1)){
                flag=1;
                k++;
            }
            else{
                flag=0;
                break;
            }
            
           
        }
        
        if(flag==1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
}