#include<bits/stdc++.h>
using namespace std;
const int c=1000000000;
int main(){

    long long int t,ans,flag=0;
    scanf("%lld",&t);
    while(t--){
        long long int t;
        scanf("%lld",&t);
        if(flag==0){
            flag=1;
            ans=t%c;
        }else{
            ans=ans&(t%c);
        }
        printf("%lld\n",ans+7);
    }
}