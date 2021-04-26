#include<bits/stdc++.h>
using namespace std;
struct strrr{

    int salary;
    int cutoff;

};
int main(){
    struct strrr office[5];
    for(int i=0;i<5;i++){
        cout<<"enter the salary and cutoff"<<endl;
        scanf("%d %d",&office[i].salary,&office[i].cutoff);
    }
    for(int i=0;i<5;i++){
        cout<<"salary = "<<office[i].salary<<" cutoff = "<<office[i].cutoff<<endl;
    }  
}