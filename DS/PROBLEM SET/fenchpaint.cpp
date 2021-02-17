#include<iostream>
int main(){
    int a , b , c, d ;
    
    std::cout<<" enter a: ";
    std::cin>> a;
    std::cout<<"b should be >a";
    std::cout<<" enter b: ";
    std::cin>> b;
    std::cout<<" enter c: ";
    std::cin>> c;
    std::cout<<"d should be >c";
    std::cout<<" enter d: ";
    std::cin>> d;
    if(b>a){
        if(c<d){
            if(b>c){
                std::cout<< b-c;
            }else{
                std::cout<<c-b ;
            }
        }else{
            std::cout<<"error : c cant be >d";
        }
    }else{
        std::cout<<"error : a cant be > b";
    }
}
