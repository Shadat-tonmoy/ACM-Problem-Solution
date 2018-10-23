//https://practice.geeksforgeeks.org/problems/factorial/0
#include <bits/stdc++.h>
using namespace std;
long long int findFact(int n);
int main() {
	int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			cout<<findFact(n)<<endl;
	    }
	}
	return 0;
}
long long int findFact(int n){
	if(n==0)
		return 1;
	long long int ans = 1,i;
	for(i=1;i<=n;i++)
		ans*=i;
	return ans;
}
