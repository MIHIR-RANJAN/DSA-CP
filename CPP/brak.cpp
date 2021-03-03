#include<bits/stdc++.h>
int main(){
    int m;
    std::cin>>m;
    
    int c =0 ;
    int d=0;
    int e=0;
    char f = 'A' ;
    char g = 'B';
    char h = 'C';

    while(m>0){
        std::string a;
        std::cin>> a;
        int b= a.length();
        if((a[0]==g|| a[0]==h)&& (a[b-1]==g|| a[b-1]==h) ){
            std::cout<<"NO\n";
        }else{
            for(int i=0; i<=b ; i++){
                    if(a[i]==f){
                        c+=1;
                    }else if(a[i]== g){
                        c-=1;
                    }else if(a[i]== h){
                        c-=1;
                    }
            }
            if(c==0){
                std::cout<<"YES\n";
            }else{
                std::cout<<"NO\n";
            }

        }
        m-=1;
    }
    
}