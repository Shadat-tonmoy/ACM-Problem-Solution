//solution without auxilary array
#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j,k,l,m,n,a,b,c,num[10000],output[10000],x,y,z,tc;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
	        cin>>n;
	        for(i=0;i<n;i++)
	            cin>>num[i];
	        j=0;
	        c=0;
	        for(i=0;i<n;i++)
	        {
	            if(num[i]!=0)
	            {
	                output[j]=num[i];
	                j++;
	            }
	            else c++;
	        }
	        for(i=0;i<j;i++)
	            cout<<output[i]<<" ";
	        for(i=0;i<c;i++)
	            cout<<0<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
