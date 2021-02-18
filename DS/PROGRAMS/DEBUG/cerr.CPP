#include <iostream>
using namespace std; 

int x;

inline void dbg() { cerr << "x is " << x << "\n"; }

int main() {
    dbg(); 
    x = 5000; 
    dbg();  
}