//url
#include <bits/stdc++.h>
using namespace std;
int isPower(long long int x,long long int y){
	if(x==1 && y==0)
	    return 1;
	if(x==1)
		return 0;
	if(y==1)
	    return 1;
	for(int i=1;;i++)
	{
		long long int n = pow(x,i);
		if(n==y)
			return 1;
		if(n>y)
			return 0;
	}
}
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>a>>b;
			cout<<isPower(a,b)<<endl;
	    }
	}
	return 0;
}
