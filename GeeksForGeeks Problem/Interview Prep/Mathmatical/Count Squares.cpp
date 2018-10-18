//https://practice.geeksforgeeks.org/problems/count-squares/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			a = sqrt(n);
			if(a*a == n)
			{
				cout<<a-1<<endl;
			}
			else cout<<a<<endl;
			
	    }
	}
	return 0;
}
