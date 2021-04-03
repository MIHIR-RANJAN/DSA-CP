#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        double kOne , kTwo , kThree , v;
        
        cin>>kOne>>kTwo>>kThree>>v;
        float final= (100)/(kOne*kTwo*kThree*v);
        final=round(final*100)/100;
        cout<<final<<"\n";
        float test=9.58;
        if(final==test){
            cout<<"no";
        }else if(final>test){
            cout<<"no";
        }else{
            cout<<"yes";
        }
    }
    

}