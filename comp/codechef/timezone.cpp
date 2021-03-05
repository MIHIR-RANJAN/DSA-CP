#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    cin>> arr[0];
    int N= arr[0];
    cin>> arr[1];
    int H= arr[1];
    cin>> arr[2];
    int x= arr[2];
    int tzone[N];
    for(int i=0 ; i<N ; i++){
        cin>>tzone[i];
    }
    int j=0;
    for(int i=0; i<N ; i++){
        if(H<=x+tzone[i]){
            cout<<"YES"<<endl;
            j=1;
            break;
        }


    }
    if(j==0){
        cout<<"NO"<<endl;
    }
    
}
