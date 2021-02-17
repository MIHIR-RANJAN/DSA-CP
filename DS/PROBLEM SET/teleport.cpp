/*
One of the farming chores Farmer John dislikes the most is hauling around lots of cow manure. In order to streamline this process, 
he comes up with a brilliant invention: the manure teleporter! Instead of hauling manure between two points in a cart behind his tractor,
 he can use the manure teleporter to instantly transport manure from one location to another.
Farmer John's farm is built along a single long straight road, so any location on his farm can be described simply using its position along
 this road (effectively a point on the number line). A teleporter is described by two numbers x and y, where manure brought to location x 
 can be instantly transported to location y, or vice versa.

Farmer John wants to transport manure from location a to location b, and he has built a teleporter that might be helpful during this 
process (of course, he doesn't need to use the teleporter if it doesn't help). Please help him determine the minimum amount of total 
distance he needs to haul the manure using his tractor.

INPUT FORMAT (file teleport.in):
The first and only line of input contains four space-separated integers: a and b, describing the start and end locations, followed by x 
and y, describing the teleporter. All positions are integers in the range 0…100, and they are not necessarily distinct from each-other.
OUTPUT FORMAT (file teleport.out):
Print a single integer giving the minimum distance Farmer John needs to haul manure in his tractor.
SAMPLE INPUT:
3 10 8 2
SAMPLE OUTPUT:
3
In this example, the best strategy is to haul the manure from position 3 to position 2, teleport it to position 8, then haul it to position 
10. The total distance requiring the tractor is therefore 1 + 2 = 3.
*/



/*
This problem is relatively straightforward -- we need to choose between three alternatives:

- If Farmer John drives directly from a to b without teleporting, he travels a distance of |a−b|.

- Farmer John could travel from a to x, teleport to y, then travel to b, for a distance of |a−x|+|b−y|.

- Farmer John could travel from a to y, teleport to x, then travel to b, for a distance of |a−y|+|b−x|.

Taking the smallest of these three yields the answer.

*/

#include <iostream>
#include <algorithm>
using namespace std;
 
int main(void)
{
  int a, b, X[8], Y[8], x, y;
  cin >> a >> b;
  cin >> x >> y;
  int answer = abs(a-b); // no teleport
  answer = min(answer, abs(a-x) + abs(b-y));
  answer = min(answer, abs(a-y) + abs(b-x));
  cout << answer << "\n";
  return 0;
}


/* SELF TRIED
#include<iostream>
int main(){
    int c[4];
    for(int i=0; i<4 ; i++){
        std::cout<<"enter the " << i <<"th position : ";
        std::cin>> c[i];

    }
    int a =  c[0];
    int b= c[1];
    int x= c[2];
    int y= c[3];
    int m=0;
    int n=0;

    if(a<x){
        if(x>y){
            if(y>a){
                m= y-a;
            }else{
                m=a-y;
            }
        }else{
            m=x-a;
        }
    }else if(a>x){
        if(x>y){
            m=a-x;
        }else if(x<y){
            if(a>y){
                m=a-y;
            }else{
                m=y-a;
            }
        }

    }
    if(b<x){
        if(x>y){
            if(y>a){
                n= y-b;
            }else{
                n=b-y;
            }
        }else{
            n=x-b;
        }
    }else if(b>x){
        if(x>y){
            n=b-x;
        }else if(x<y){
            if(b>y){
                n=b-y;
            }else{
                n=y-b;
            }
        }

    }
    if(m>n){
        std::cout<< m-n;
    }else{
        std::cout<< n-m;
    }
    

}
*/