#include <iostream>
using namespace std; 

int x = 10; // some important variable

inline void dbg() { cerr << "x is " << x << "\n"; }

int main() {
    dbg(); 
    x = 5000; 
    dbg();  
}