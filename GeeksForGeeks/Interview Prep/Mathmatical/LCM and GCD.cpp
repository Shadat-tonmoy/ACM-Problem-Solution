//https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0
#include <bits/stdc++.h>
using namespace std;
pair<int,int> findGCDLCM(int a,int b);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>a>>b;
			pair<int,int> result = findGCDLCM(a,b);
			cout<<result.second<<" "<<result.first<<endl;
	        
	    }
	}
	return 0;
}
pair<int,int> findGCDLCM(int dividend,int divisor){
	int remainder,a=dividend,b=divisor;
	pair<int,int> result;
	while(divisor!=0)
	{
		remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	int lcm = (a * b) / dividend;
	result.first = dividend;
	result.second = lcm;
	return result;
}
