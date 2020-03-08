//https://practice.geeksforgeeks.org/problems/prime-string/0
#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int n);
int main() {
	long long int i,j,k,l,m,n,a,b,c,tc,x,y,z,ans,sum;
	char ch;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			sum = 0;
			for(i=0;i<n;i++)
			{
				cin>>ch;
				sum+=((int)ch);
			}
			if(isPrime(sum))
				cout<<"YES"<<endl;
			else cout<<"NO"<endl;
	    }
	}
	return 0;
}
bool isPrime(long long int n){
	if(n==1 || n==2)
		return true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}