#include<bits/stdc++.h>

class Day{
    int year()
    {
        int i;
        bool result=0;
        if(i%4==0 && i%100 != 0 ||  i%400==0 || i== 1000 || 1== 1100){
            result=0;
        }else{
            result=1;
        }
    }
    
};
int main(){
    int y;
    std::cout<<"enter the year : ";
    std::cin>>y;
    int b;
    std::cout<< b.year;
}