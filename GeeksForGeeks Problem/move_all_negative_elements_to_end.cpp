// https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[15000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			vector<int> output;
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			for(i=0;i<n;i++)
			{
				if(num[i]>=0)
					output.push_back(num[i]);
			}
			for(i=0;i<n;i++)
			{
				if(num[i]<0)
					output.push_back(num[i]);
			}
			for(i=0;i<output.size();i++)
				cout<<output[i]<<" ";
			cout<<endl;

	        
	        
	        
	    }
	}
	return 0;
}
