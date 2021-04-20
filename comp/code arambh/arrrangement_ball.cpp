/*You and your friend are collecting balls, balls collected by you will marked 0 and your friend is 1. Now you have to arrange the balls in a 1D box such that left side of box contains all 0 marked balls.

Input
First line of input contains T, the number of test cases.
Second line of input contains N, the number of balls.
Third line of the test case contains N space-separated integers, A[i]
Output
For each test case print the sorted order of balls without using space in between.
Constraints
1<=T<=5
1<=N<=109
Sample Input
2

5

1 0 0 1 1

10

0 1 1 1 1 1 0 0 0 0

Sample Output
00111

0000011111*/

#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int b[n];
        for(int j=0;j<n;j++){
            cin>>b[i];
        }
        int k=0;
        int l=1;
        int zero=0;
        int zerok=0;
        int q=0;
        int qk=0;
        int z[n];
        int f[n];
        for(int j=0;j<n;j++){
            if(b[i]==k){
                z[zero]=b[i];
                zero++;

            }else if(b[i]==l){
                f[q]=b[i];
                q++;

            }
        }
        for(int j=0;j<zero;j++){
            cout<<z[j]<<" ";
        }
        for(int j=0;j<q;j++){
            cout<<f[j]<<" ";
        }
        
        
    }
}