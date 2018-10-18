//https://practice.geeksforgeeks.org/problems/3-divisors/0
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000],op1,op2;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			bool visited[1000000] = {false};
			b = sqrt(n);
			c=0;
			for(i=2;i<=b;i++)
			{
				op1 = i;
				op2 = i*i;
				// cout<<"OP1 "<<op1<<" OP2 "<<op2<<endl;
				a = sqrt(op1);
				if(!visited[op1] && a*a == op1 && isPrime(a))
				{
					// cout<<"for op1 true"<<endl;
					visited[op1]=true;
					c++;
				}
				a = sqrt(op2);
				if(!visited[op2] && a*a == op2 && isPrime(a))
				{
					// cout<<"for op2 true"<<endl;
					visited[op2]=true;
					c++;
				}
			}
			cout<<c<<endl;
	    }
	}
	return 0;
}
bool isPrime(int n)
{
	if(n==1 || n==2)
		return true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}