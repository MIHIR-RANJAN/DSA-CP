#include<bits/stdc++.h>
using namespace std;
int main(){

    int a;
  
    std::cin>>a;
    int b[a-1];
    for(int i=0;i<a-1;i++){
        cin>>b[i];
    }
    sort(b,b+a-1);
    int k=1;
    for(int i=0;i<a;i++){
        if(b[i]==k){
            k++;
        }else{
            cout<<k;
            break;
        }

    }
}

/* or ek kaam kr a tk sum lele a*(a+1)/2
  and a-1 tk arr ka sum le then a-arr kr and different is missing hoga*/