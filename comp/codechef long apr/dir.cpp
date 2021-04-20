#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
        ll d;
        cin>>d;
        ll count =0;
        for(int j=1;j<=6;j++){
            if(j!=d){
                count+=j;
            }
        }
        cout<<count;
    }
}