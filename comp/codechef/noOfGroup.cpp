#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    string str;
    
    
    for(int j=0 ; j<test ; j++){
        int group=0;
        cin>> str;
        int n= str.length();
        for(int i=0; i<n; i++){
            if(str[i]=='1' && str[i+1]=='1'){
                continue;
            }else if(str[i]=='1'){
                group+=1;
            }
            
        }
        cout<<group<<endl;
    }
    
}