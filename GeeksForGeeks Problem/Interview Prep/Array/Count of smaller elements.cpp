//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[100005];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			cin>>k;
			ans = 0;
			for(i=0;i<n;i++)
			{
				if(num[i]<=k)
					ans++;
			}
			cout<<ans<<endl;
	        
	        
	        
	    }
	}
	return 0;
}
