//https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array/0
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[10000];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			long long int minElem=0,maxElem=9999999999999;
			for(i=0;i<n;i++)
	        {
				cin>>a;
				minElem = min(minElem,a);
				maxElem = max(maxElem,a);
			}
			cout<<minElem<<" "<<maxElem<<endl;
	        
	        
	    }
	}
	return 0;
}
