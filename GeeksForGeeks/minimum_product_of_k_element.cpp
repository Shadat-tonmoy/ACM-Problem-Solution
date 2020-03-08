//https://practice.geeksforgeeks.org/problems/minimum-product-of-k-integers/0
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main() {
	long long int i,j,k,l,m,n,a,b,c,tc,x,y,z,prev,ans,lower,upper,mid,num[100009];
	while(cin>>tc)
	{
	    for(x=1;x<=tc;x++)
	    {
			cin>>n;
			for(i=0;i<n;i++)
				cin>>num[i];
			cin>>k;
			sort(num,num+n);
			ans = 1;
			for(i=0;i<k;i++)
				ans = ((ans%MOD * num[i]%MOD)%MOD);
			cout<<ans<<endl;
	        
	        
	        
	    }
	}
	return 0;
}
