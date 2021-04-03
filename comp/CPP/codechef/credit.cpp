#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int d, y;
    cin>>d>>y;
    while(d>0){
        long long int cost=0;
        long long int N;
        cin>>N;
        while(N--){
            long long int t1,t2;
            cin>>t1>>t2;
            if(t1-21600<=0 && t2-21600<=0){
                cost +=0;
            }else if(t1-21600<0 && t2-21600>0){
                cost+=(t2-21600)*y;     // t1<21600<t2
            }else{
                cost+=(t2-t1)*y;
            }

        }
        cout<<cost<<"\n";
        d--;
        
    }

}