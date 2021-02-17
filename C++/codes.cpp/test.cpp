#include<iostream>
int main(){
    int a; 
    std::cout<<"enter the no: ";
    std::cin>>a;
    for(int i=2; i<a<=a/2; i++){
        std::cout<<i;
        return 0;
    }
}