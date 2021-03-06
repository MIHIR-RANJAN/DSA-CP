#include<bits/stdc++.h>
using namespace std;
int main(){
    //int n;
    int ne;
    //cin>> n;
    cin>>ne;
    int t[ne];
    for(int i=0; i<ne ; i++){
        cin>>t[i];
    }
    int k=0;
    sort(t , t+ne);

    int first=t[0];
    int me[ne];
    for(int i=0 ; i <ne; i++){
        me[i]=first+i;
    }
    for(int i=0 ; i <ne; i++){
        cout<<me[i]<<" ";
    }
    cout<<"\n";
    for(int i=1; i>0 ; i++){
        for(int j=0; j<ne ; j++){
            if(t[j]==t[j+1]){
                t[j+1]+=1;
                break;
            }else{
                continue;
            }
        }
        
    }
    for(int i=0; i<ne ; i++){
        cout<<"the array"<<t[i]<<" ";
    }
    
}