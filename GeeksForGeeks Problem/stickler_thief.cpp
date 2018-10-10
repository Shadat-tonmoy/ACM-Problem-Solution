//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,op1,op2,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			op1=0;
			op2=0;
			for(i=0;i<n;i+=2)
				op1+=num[i];
			for(i=1;i<n;i+=2)
				op2+=num[i];
			cout<<max(op1,op2)<<endl;
			
	        
	        
	        
	    }
	}
	return 0;
}
