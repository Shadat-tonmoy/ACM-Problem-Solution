//https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers/0
#include <bits/stdc++.h>
using namespace std;
int findGCD(int a,int b);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>a>>b;
			cout<<findGCD(a,b)<<endl;
	    }
	}
	return 0;
}
int findGCD(int dividend,int divisor)
{
	int remainder;
	while(divisor!=0)
	{
		remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;

	
}