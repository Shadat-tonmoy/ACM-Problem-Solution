//https://practice.geeksforgeeks.org/problems/closest-number/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(l=1;l<=tc;l++)
	    {
			cin>>a>>b;
			for(i=0;;i++)
			{
				x = a-i;
				y = a+i;
				if(abs(x)%b==0 && abs(y)%b==0)
				{
					if(abs(x)>abs(y))
						cout<<x<<endl;
					else cout<<y<<endl;
					break;
				}
				else if(abs(x)%b==0)
				{
					cout<<x<<endl;
					break;
				}
				else if(abs(y)%b==0)
				{
					cout<<y<<endl;
					break;
				}
			}
	        
	        
	        
	    }
	}
	return 0;
}
