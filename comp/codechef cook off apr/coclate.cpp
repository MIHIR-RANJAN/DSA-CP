#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int z=0;z<t;z++){
        int N,x;
        cin>>N>>x;
        int s;
        int q=N;
        long int a[N];
        long int i,j,k;
        for(i=0;i<N;i++)
        {
            scanf("%ld",&a[i]);
        }
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]>a[j])
            {
                s = a[i];
                a[i] = a[j];
                a[j] = s;
            }
        }
    }
        for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i] == a[j])
            {
                for(k=j;k<N;k++)
                {
                    a[k] = a[k+1];
                }
                N--;
                j--;
                    
            }
        }
        }
        
        
        if((q-N)>=x){
            cout<<N<<"\n";
        }else if((q-N)<x){
            N=N-(x-(q-N));
            cout<<N<<"\n";
        }

        
    
    }
}