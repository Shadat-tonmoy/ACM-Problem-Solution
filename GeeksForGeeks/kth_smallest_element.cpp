//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
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
			cin>>k;
			sort(num,num+n);
			cout<<num[k-1]<<endl;
			
	        
	        
	        
	    }
	}
	return 0;
}
