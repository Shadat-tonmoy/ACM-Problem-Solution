//https://www.geeksforgeeks.org/replace-every-array-element-by-multiplication-of-previous-and-next/
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[1000],out[1000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			for(i=0;i<n;i++)
			{
				if(i==0)
				{
					out[i] = num[i]*num[i+1];
				}
				else if(i==n-1)
				{
					out[i] = num[i]*num[i-1];
				}
				else out[i] = num[i-1] * num[i+1];
			}
	        
	        
	        
	    }
	}
	return 0;
}
