//https://practice.geeksforgeeks.org/problems/gcd-of-array/0
#include <bits/stdc++.h>
using namespace std;
int num[1000000];
int findGCD(int a,int b);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			if(n==1)
				cout<<num[0]<<endl;
			else 
			{
				k = findGCD(num[0],num[1]);
				for(i=2;i<n;i++)
				{
					k = findGCD(k,num[i]);
				}
				cout<<k<<endl;
			}
	    }
	}
	return 0;
}
int findGCD(int a,int b)
{
	int divisor = a,dividend = b,remainder;
	while(divisor!=0)
	{
		remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}
