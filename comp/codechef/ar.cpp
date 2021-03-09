#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int N;
    cin>>N;
    for(int k=1; k <=N ;k++){
        int ne;
        
        cin>>ne;
        int t[ne];
        for(int i=0; i<ne ; i++){
            cin>>t[i];
        }
        
        
        int op=1;
        if(op<t[0]){
            cout<<"Second";
            break;
        }
        int f=1;
        
        for(int i=1 ; i<=ne*ne ; i++){
            
            for(int j=0 ; j<ne ;j++ ){
                if(t[j]<op){
                    int l= op-t[j];
                    t[j]=t[j]+(op-t[j]);
                    f=f+l;
                    
                }
                op++;
                
            }
            
        }
        if(f%2==0){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
        
    }
}