//url
#include <bits/stdc++.h>
using namespace std;
int ax,ay,bx,by,cx,cy,dx,dy;
int countZeros(int n);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			cout<<countZeros(n)<<endl;
	        
	    }
	}
	return 0;
}
int countZeros(int n)
{
	int count = 0;
	int i;
	for(i=5;n/i>=1;i*=5)
	{
		count+=(n/i);
	}
	return count;
}
