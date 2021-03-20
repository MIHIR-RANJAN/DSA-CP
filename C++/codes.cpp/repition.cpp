#include<iostream>
#include<string>
using namespace std;
int main(){
    int a=1 ,c=1 ,g=1, t=1;
    char dna[1000000];
    cin>>dna;
    for(int i=0 ; i< 1000000; i++){
        if(dna[i]==dna[i+1]){
            if(dna[i+1]==a){
                a+=1;
            }else if(dna[i+1]==c){
                c+=1;
            }else if(dna[i+1]==g){
                g+=1;
            }else if(dna[i+1]==t){
                t+=1;
            }else{
                continue;
            }
        }
    }
    cout<<a<<" "<<c<<" "<<g<<" "<<t;

    
    



}