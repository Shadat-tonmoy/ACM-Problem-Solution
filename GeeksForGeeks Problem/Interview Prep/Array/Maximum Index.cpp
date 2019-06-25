//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,diff,ans,lower,upper,mid,num[10000],maxDiff;
	while(cin>>tc)
	{
		//freopen("input.txt", "r", stdin);
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			maxDiff = 0;
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(num[j]>=num[i])
					{
						maxDiff = max(maxDiff,(j-i));
					}
				}
			}
			cout<<maxDiff<<endl;
			
	        
	        
	        
	    }
	}
	return 0;
}
