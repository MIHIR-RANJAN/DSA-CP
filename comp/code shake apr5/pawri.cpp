#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int k=0; k<t;k++){
        //strOne = mohit
        char strOne[101];

        int i, sumOne = 0; 
        //cout << "Enter a string : ";
        gets(strOne);
        //strTwo rashmi
        char strTwo[101];
        gets(strTwo);

        int j, sumTwo = 0; 
        //cout << "Enter a string : ";
        
        for (i = 0; strOne[i] != '\0'; i++)
            sumOne = sumOne + strOne[i];
        for (j = 0; strTwo[j] != '\0'; j++)
            sumTwo = sumTwo + strTwo[j];
        
        long long int final = sumTwo-sumOne;
      //cout<<"mohit is "<<sumOne<<"\n";
      //cout<<"rashmi is "<<sumTwo<<"\n";
        if(final>=1 || final<=10 ){
            cout<<"Rashmi";
        }else{
            cout<<"Mohit";
        }
    }
}