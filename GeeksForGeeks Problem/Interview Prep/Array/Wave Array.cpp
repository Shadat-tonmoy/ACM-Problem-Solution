//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			sort(num,num+n);
			i=0;
			j=1;
			while(true)
			{
				if(j<n)
					cout<<num[j]<<" ";
				if(i<n)
					cout<<num[i]<<" ";
				i+=2;
				j+=2;
				if(i>=n && j>=n)
				    break;
			}
			cout<<endl;
	    }
	}
	return 0;
}
