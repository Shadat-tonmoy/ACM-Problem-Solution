//https://practice.geeksforgeeks.org/problems/add-two-fractions/1
#include <bits/stdc++.h>
using namespace std;
int findLCM(int a,int b);
int findGCD(int a,int b);
int main() {
	int i,j,k,l,m,n,nemA,denemA,nemB,denemB,c,tc,x,y,z,lcm;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>nemA>>denemA>>nemB>>denemB;
			lcm = findLCM(denemA,denemB);
			cout<<"LCM "<<lcm<<endl;
			y = (nemA*(lcm/denemA)) + (nemB*(lcm/denemB));
			z = findGCD(y,lcm);
			cout<<y/z<<"/"<<lcm/z<<endl;
	    }
	}
	// 1041830/812492
// 521474/165648
	return 0;
}
int findLCM(int a,int b)
{
	int dividend = a,divisor = b, remainder;
	while(divisor!=0)
	{
		remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return (a*b)/dividend;
}

int findGCD(int a,int b)
{
	int dividend = a,divisor = b, remainder;
	while(divisor!=0)
	{
		remainder = dividend % divisor;
		dividend = divisor;
		divisor = remainder;
	}
	return dividend;
}