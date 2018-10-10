//https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,sm,sm2,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			sort(num,num+n);
			sm=-1;
			sm2=-1;
			sm=num[0];
			for(i=1;i<n;i++)
			{
				if(num[i]>sm)
				{
					sm2=num[i];
					break;
				}
			}
			if(sm!=-1 && sm2!=-1)
				cout<<sm<<" "<<sm2<<endl;
			else cout<<-1<<endl;
	        
	        
	        
	    }
	}
	return 0;
}
