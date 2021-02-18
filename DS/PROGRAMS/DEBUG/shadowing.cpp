#include<bits/stdc++.h>
using namespace std;


/*Each block defines its own scope region. So what happens when we have a 
variable inside a nested block that has the same name as a variable in an 
outer block? When this happens, the nested variable “hides” the outer variable
 in areas where they are both in scope. This is called name hiding or shadowing.*/


int main(){
    //outer block
    int a = 5;
    {
        // ineer block
        cout<<a<<"\n"; //output for outer block a
        int a=0; // again giving one value to a
        a=10; // and giveing one more value to a
        cout<<a<<"\n"; // printing the value of given in inner block
    }
    cout<<a<<"\n";//print a of outer block again
}

// output is 5 10 5 but not 5 0 10 5 as inner block hide the input a=0