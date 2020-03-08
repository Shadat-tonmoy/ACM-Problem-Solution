//url
#include <bits/stdc++.h>
using namespace std;
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	double r;
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>a>>b;
			r = (double)b/a;
			cin>>n;
			if(n==1)
				cout<<a<<endl;
			else if(n==2)
				cout<<b<<endl;
			else cout<<floor(a*pow(r,n-1))<<endl;
	    }
	}
	return 0;
}
