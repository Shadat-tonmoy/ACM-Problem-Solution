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
			m=0;
			int counts[1000] = {0};
			for(i=0;i<n;i++)
			{
				cin>>num[i];
				counts[num[i]]++;
			}
			bool found = false;

			for(i=0;i<n;i++)
			{
				if(counts[num[i]]>n/2)
				{
					found = true;
					cout<<num[i]<<endl;
					break;
				}
			}
			if(!found)
				cout<<-1<<endl;
	    }
	}
	return 0;
}
