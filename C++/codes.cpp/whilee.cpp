#include<iostream>
#include<string>
int main()
{
    int a = 5;
    int i=10;
    while(a>0){
        i=a+i;
        a-=1;
        std::cout<< i << "i  " <<a << "a  ";
        
    }
    std::cout << i << "final i" ;
}