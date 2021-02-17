#include<iostream>
using namespace std;

/* this is for entering multiple words as without getline you cant print more
one word*/
int main()
{
    string name ;
    cout<<"enter the name :";
    getline(cin, name);
    cout<<"you entered = "<< name;

}