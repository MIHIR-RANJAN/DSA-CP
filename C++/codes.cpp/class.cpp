/* Print natural numbers in reverse
Given a number N, print natural numbers in reverse from N to 1.

Input:
    10

 

    where:

First line represents value of N.
 
Output:
    10 9 8 7 6 5 4 3 2 1

 

Assumptions:

N can be in the range 1 to 1000.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout<<"enter the no : ";
    cin>>a;
    int c=a;
    int b[a-1];
    for(int i=0; i<=a-1; i++){
        b[i]=c;
        c=c-1;
    }
    cout<<" ther reverse is : ";
    for(int i=0; i<=a-1 ; i++){
        cout<< b[i]<< " ";
    }
    
    
    
}