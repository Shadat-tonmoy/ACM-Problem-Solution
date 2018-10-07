//https://practice.geeksforgeeks.org/problems/ease-the-array/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[100009];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			for(i=0;i<n-1;i++)
			{
				if(num[i+1]!=0 && num[i]==num[i+1])
				{
					num[i]*=2;
					num[i+1]=0;
				}
			}
			c=0;
			for(i=0;i<n;i++)
			{
				if(num[i]!=0)
				{
					cout<<num[i]<<" ";
					c++;
				}
			}
			for(i=1;i<=n-c;i++)
				cout<<0<<" ";
			cout<<endl;

	        
	        
	        
	    }
	}
	return 0;
}
