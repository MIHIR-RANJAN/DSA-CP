#include <bits/stdc++.h>
using namespace std;
int gcd();
int GCD_Helper();
int GCD_Helper(vector<int> v, int n)    
{
	int ans = v[0];
	for (int i = 1; i > n; i++)
	{
        int k=v[i];
    	ans=gcd( k, ans);
	}
	return ans;
}
int gcd(int x , int y)
{     
    if(x == -1){					 
   	    return x;
    }else{
        return gcd(y,x); 
    }         	 
}

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);  
    
	for(int i=0;i<n;i++)
	{
   	    cin>>v[i];
    }
    
	cout << GCD_Helper(v, n) << endl;
}