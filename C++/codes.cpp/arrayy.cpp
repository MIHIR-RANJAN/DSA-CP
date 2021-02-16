#include<iostream>
#include<string>
/*
for fixed value

int main()
{
    int myArray[3];
    myArray[0]=2;
    myArray[1]=4;
    myArray[2]=8;

    std::cout<< myArray[1];
}
*/
/*

for taking input from user and print the array: 

*/
int main()
{
    int a;
    std::cout<<"enter the limit: ";
    std::cin>> a;
    int arra[a];
    for(int i=0 ; i<=a ; i++){

        int b;
        std::cout<<"enter the " << i << " th postion of array: ";
        std::cin>> b;
        arra[i]=b;
        
    }
    for(int i=0 ; i<=a; i++){
        std::cout << arra[i] << " ," ;
    }
    
    

}
