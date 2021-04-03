/*
The growth of Computer Science has forced the scientific community to award Nobel Prize in CS starting from this year.

Chef knows that the Nobel community is going to award the prize to that person whose research is different from others (ie. no 
other researcher should work on the same topic). If there are multiple such people, who work on unique topics, then they will 
all share the prize. It might also happen that no one wins this time.

Chef also knows the N researchers which the community who will be considered for the prize, and the topics in which each of them work.

In total the CS field can be divided into M broad topics. Given the topics in which each of the N researchers are working on, 
in the form of an array A, and given that Chef can master any topic instantly, find whether he can win the prize. That is, can 
the Chef choose to work on some topic which will guarantee that he will win the prize? Chef doesn't mind sharing the prize with others.

Input:
First line will contain T, number of testcases. Then the testcases follow.
Each testcase contains of two lines of input.
First line contains two space separated integers N, M, number of researchers excluding Chef and total number of fields respectively.
Second line contains N space separated integers A1,A2,…AN, research topic of the researchers.
Output:
For each testcase, output in a single line answer, "Yes" if Chef can win the prize and "No" if not.

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" 
will all be treated as identical).

Constraints
1≤N,M≤105
1≤Ai≤M
Sum of N over all tests is at most 106
Sum of M over all tests is at most 106
Sample Input:
3
4 4
1 2 3 4
5 4
4 2 1 1 1
4 4
4 4 4 4
Sample Output:
No
Yes
Yes
Explanation:
TestCase 1: Since all the 4 available topics have been taken up, Chef can't choose a distinct topic and hence can't win the prize. 
No one will win the prize this year.

TestCase 2: Since only 3 distinct topics out of the 4 available have been taken up, Chef can choose the remaining one, i.e, topic 3 to win 
the prize jointly with the first and the second researcher.

TestCase 3: Since only 1 distinct topic out of the 4 available has been taken up, Chef can choose any of the remaining ones to win the prize.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

    int b;
    cin>>b;
    for(int i=0 ; i<b ;i++){
        int n,m;
        cin>>n >>m;
        int a[n];
        int flag=0;
        for(int j=0; j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        for(int j=0; j<n;j++){
            cout<<a[j];
        }
        for(int j=1; j<=m;j++){
            for(int k=0;k<n;k++){
                if(a[k]!=j){
                    flag+=flag;
                    
                }else{
                    flag-=flag;;
                }
                
            }
            if(flag==m){
            cout<<"YES\n";
            }
                
        }
        if(flag==m){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }



}