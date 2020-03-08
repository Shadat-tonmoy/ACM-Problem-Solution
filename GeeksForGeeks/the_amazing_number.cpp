//https://practice.geeksforgeeks.org/problems/the-amazing-number/0
#include <bits/stdc++.h>
using namespace std;
bool isAmazingNum(long long int n);
bool isPrime(long long int n);
int main() {
	long long int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			cout<<isAmazingNum(n)<<endl;
	    }
	}
	return 0;
}
bool isAmazingNum(long long int n){
	long long int a = sqrt(n);
	if(a*a == n && isPrime(a))
		return true;
	else return false;
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
