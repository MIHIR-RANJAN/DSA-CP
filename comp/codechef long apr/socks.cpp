#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b ,c;
    cin>>a>>b>>c;
    if(a==b==c){
        cout<<"yes";
    }else if(a==b){
        cout<<"yes";
    }else if(a==c){
        cout<<"yes";
    }else if(b==c){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}