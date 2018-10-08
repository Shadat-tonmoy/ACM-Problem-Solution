//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n>>k;
			for(i=0;i<n;i++)
				cin>>num[i];
			sort(num,num+n);
			for(i=n-1;i>=n-k;i--)
				cout<<num[i]<<" ";
			cout<<endl;

	        
	        
	        
	    }
	}
	return 0;
}
