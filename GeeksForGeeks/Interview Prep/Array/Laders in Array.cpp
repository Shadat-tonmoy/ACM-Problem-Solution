//url
#include <bits/stdc++.h>
using namespace std;
int num[10000005],output[1000005];
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			j=0;
			int max = 0;
			for(i=n-1;i>=0;i--)
			{
				if(num[i]>=max)
				{
					max = num[i];
					output[j]=max;
					j++;
				}
			}
			for(i=j-1;i>=0;i--)
				cout<<output[i]<<" ";
			cout<<endl;
	        
	    }
	}
	return 0;
}
