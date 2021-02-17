/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd,
 the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence 
 for n=3 is as follows:

3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Input

The only input line contains an integer n.

Output

Print a line that contains all values of n during the algorithm.

Constraints
1≤n≤106
Example

Input:
3

Output:
3 10 5 16 8 4 2 1
*/

/*#include<iostream>
int main(){
    int a;
    std::cout<<"enter the no: ";
    std::cin>> a;
    for(int i=0 ; i>0 ; i++){
         int b[i];
        if(a==1){
            
            break;
        }else if(a%2==0){
            b[i]=a/2;
            
        }else{
            b[i]=(a*3)+1;
            
        }
        std::cout<< b[i];
    }
    
}
*/
#include <iostream>
using namespace std;

int main() {
	long long x; cin >> x;
	while (x != 1) {
		cout << x << "enter the no ";
		if (x%2 == 0) x /= 2;
		else x = 3*x+1;
	}
	cout << x;
}
