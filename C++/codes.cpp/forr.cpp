#include<iostream>
#include<string>
int main()
{
    
    int i=10;
    for(int a=5 ; a>0 ; a--){
        i=i+a;

        std::cout << i <<" c " << a << " a ";
    } 
    std::cout <<" final "<<  i << " final ";
}