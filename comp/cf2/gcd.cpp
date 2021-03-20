#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{     
    if(y == 0)			 
   	return x;
	else
    return gcd(y,x%y);          	 
}
int GCD_Helper(vector<int> v, int n)    
{
	int ans = v[0];
	for (int i = 0; i < n; i++)
	{
    	ans= gcd(v[i], ans);
	}
	return ans;
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