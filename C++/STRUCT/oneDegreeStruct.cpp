// my room things - add colour from user

#include<bits/stdc++.h>
using namespace std;

struct myHouse{
    int noBed;
    int noGym;
    int noBooks;
    int noWaste;

};

int main(){

    struct myHouse myRoom;
    cout<<"the no of bed is : ";
    cin>>myRoom.noBed;
    cout<<"n";
    cout<<"the no of gym material is : ";
    cin>>myRoom.noGym;
    cout<<"n";
    cout<<"the no of books is : ";
    cin>>myRoom.noBooks;
    cout<<"n";
    cout<<"the no of waste incuding me is : ";
    cin>>myRoom.noWaste;
    cout<<"\n";
    cout<<"\n";
    cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
    cout<<"\n";
    cout<<"\n";
    
    cout<<"the no of bed is "<< myRoom.noBed<<endl;
    cout<<"the no of gym material is "<< myRoom.noGym<<endl;
    cout<<"the no of books is "<< myRoom.noBooks<<endl;
    cout<<"the no of waste incuding me is "<< myRoom.noWaste<<endl;



}