#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v;
	cout << v[-1];
}

//use below in terminal
//g++ sanitizer.cpp -o prog -fsanitize=undefined && ./prog 
//g++ sanitizer.cpp -o prog -fsanitize=address && ./prog
//g++ sanitizer.cpp -o prog -fsanitize=address -g && ./prog
//g++ sanitizer.cpp -o prog -D_GLIBCXX_DEBUG && ./prog