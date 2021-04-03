#include<bits/stdc++.h>
using namespace std;
const int c=1000000000;
int main(){

    long long int n,ans,flag=0,inp1=0,inp2=0;
    scanf("%lld",&n);
    while(n--){
        
        scanf("%lld",&inp2);
        
            flag=1;
            ans=(inp1%c)&(inp2%c);

        printf("%lld\n",ans+7);
        long long int temp=inp1;
        inp1=inp2;
        inp2=temp;

    }
}