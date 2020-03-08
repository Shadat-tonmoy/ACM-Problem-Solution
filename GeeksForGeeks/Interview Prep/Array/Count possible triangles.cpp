//url
#include <bits/stdc++.h>
using namespace std;
int num[10000005];
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			sort(num,num+n);
			ans = 0;
			for(i=0;i<n-1;i++)
			{
				y = num[i]+num[i+1];
				for(j=i+2;j<n;j++)
				{
					if(num[j]>y)
						ans++;
					else break;
				}
			}
			cout<<ans<<endl;
			
	        
	        
	        
	    }
	}
	return 0;
}
